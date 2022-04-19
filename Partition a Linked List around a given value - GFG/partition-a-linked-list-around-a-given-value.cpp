// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
     struct Node* node=head;
   vector<int>v;
   while (node != NULL) {
       if(node->data<x){
           v.push_back(node->data);
       }
       node = node->next;
   }
   node=head;
   while (node != NULL) {
       if(node->data==x){
           v.push_back(node->data);
       }
       node = node->next;
   }
   node=head;
   while (node != NULL) {
       if(node->data>x){
           v.push_back(node->data);
       }
       node = node->next;
   }
   int n=v.size();
   struct Node* h = NULL;
   struct Node* temp = NULL;
   for (int i = 0; i < n; i++) {
       if (i == 0) {
           h = new Node(v[i]);
           temp = h;
       } else {
           temp->next = new Node(v[i]);
           temp = temp->next;
       }
   }
   return h;
}