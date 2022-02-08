// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/




// simple clear approach 

 

 

class Solution{
 public:
 //function to reverse the list
 Node*reverse(Node*head)
 {
     Node*curr=head;
     Node*prev=NULL;
     while(curr)
     {
         Node*next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
 }
 //function to find the middle node
 Node*middleNode(Node *head)
 {
     Node*slow=head;
     Node*fast=head;
     while(fast&&fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
     }
     return slow;
 }
 
   //Function to check whether the list is palindrome.
   bool isPalindrome(Node *head)
   {
       //Your code here
       Node *middle=middleNode(head);
       Node *rev=reverse(middle);
       Node*curr=head;
       while(curr!=middle)
       {
           if(curr->data!=rev->data)
           return false;
           curr=curr->next;
           rev=rev->next;
       }
       return true;
   }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends