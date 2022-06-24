// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Node structure

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

class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       Node *oc,*ec,*os,*es,*p;
       if(!head || !head->next)
       return ;
       oc=ec=os=es=NULL;
       p=head;
       int c=0;
       while(p)
       {
           if(c % 2 ==1 )
           {
               if(es==NULL)
               {
                   es=ec=p;
               }
               else
               {
                   ec->next=p;
                   ec=ec->next;
               }
           }
           if(c% 2 ==0 )
           {
               if(os==NULL)
               {
                   os=oc=p;
               }
               else
               {
                   oc->next=p;
                   oc=oc->next;
               }
           }
           c++;
           p=p->next;
       }
       oc->next=es;
       ec->next=NULL;
       head=os;
    }
};


// { Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends