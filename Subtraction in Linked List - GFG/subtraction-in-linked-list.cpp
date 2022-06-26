// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/



//function to find length of LL 

int findLength(Node* head){
   int length = 0;
   Node *curr = head;
   while(curr != NULL){
       length++;
       curr = curr -> next;
   }
   return length;
}

// function to find larger & smaller LL and return there head

void findLarger(Node* l1, Node* l2,int l1Length,int l2Length,Node* &lNode,Node* &sNode){
   // find larger & smaller when length are different
   if(l1Length != l2Length){
       lNode = l1Length > l2Length ? l1 : l2 ;
       sNode = l1Length > l2Length ? l2 : l1;
       return;
   }else{ 
       // find larger & smaller when length are equal
       bool flag = false;
       while(l1 != NULL && l2 != NULL){
           //check for not equal nodes
           if(l1 -> data != l2 -> data){
               lNode = l1-> data > l2 -> data ? l1 : l2;
               sNode = l1 -> data > l2 -> data ? l2 : l1;
               flag = true;        // found larger & smaller LL 
               break;
           }else{
               l1 = l1 -> next;
               l2 = l2 -> next;
           }
       }
       if(flag == false){
           lNode = NULL;             // if both LL are same return NULL
           sNode = NULL;
       }
   }
}

// function to reverse LL

Node* reverseLL(Node * &head){
   Node* prev = NULL;
   Node* curr = head;
   Node* Next = NULL;
   while(curr != NULL){
       Next = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr = Next;
   }
   return prev;
}

// function to insert node at tail (end)

void insertAtTail(Node* &Head,Node* &Tail,int val){
   Node* tempNode = new Node(val);
   if(Head == NULL){
       Head = tempNode;
       Tail = tempNode;
       return;
   }else{
       Tail -> next = tempNode;
       Tail = tempNode;
   }
}

// function to subtract Smaller LL from Larger LL

Node* subtractLL(Node* lNode,Node* sNode){
   int borrow = 0;
   Node* Head = NULL;
   Node* Tail = NULL;
   while(lNode != NULL || sNode != NULL || borrow != 0){
       int val1 = lNode -> data;
       int val2 = 0;
       if(sNode != NULL){
           val2 = sNode -> data;
       }
       int diff = borrow + val1 - val2;
       if(diff < 0){
           borrow = -1;
           diff += 10;
       }else {
           borrow = 0;
       }
       insertAtTail(Head,Tail,diff);
       if(lNode != NULL){
           lNode = lNode -> next;
       }
       if(sNode != NULL){
           sNode = sNode -> next;
       }
   }
   return Head;
}

Node* subLinkedList(Node* l1, Node* l2)
{
   //Your code here
   //step 1 find length of l1 & l2
   int l1Length = findLength(l1);
   int l2Length = findLength(l2);
   //if l1 has only one 1 node with value 0 then L2 - L1(0) = L2 and vice veresa
   if(l1Length == 1 && l1 -> data == 0) return l2;
   if(l2Length == 1 && l2 -> data == 0) return l1;
   // if l1 & l2 has leading zeroes remove them and decrease there length
   while(l1 -> data == 0){
       l1 = l1 -> next;
       l1Length--;
   }
   while(l2 -> data == 0){
       l2 = l2 -> next;
       l2Length--;
   }
   //step 2 find larger LL & smaller LL
   Node* lNode = NULL;
   Node* sNode = NULL;
   findLarger(l1,l2,l1Length,l2Length,lNode,sNode);

// if both are null that means both have same data thus subtraction is 0
   if(lNode == NULL && sNode == NULL) return new Node(0);
   //step 3 reverse larger & smaller ll
   lNode = reverseLL(lNode);
   sNode = reverseLL(sNode);
   //step 4 subtract smaller LL from larger LL and keep it in ans
   Node* ans = subtractLL(lNode,sNode);
   //step 5 reverse ans LL
   ans = reverseLL(ans);

// removal of leading 0's
   while(ans -> data == 0)
       ans = ans -> next;
   return ans;
}