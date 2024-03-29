// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
  Node *rev(Node *head)
  {
      Node *cur,*p,*n;
      cur=head;
      p=NULL;
      while(cur)
      {
          n=cur->next;
          cur->next=p;
          p=cur;
          cur=n;
      }
      return p;
  }
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_map<int,int>mp;
        while(head2)
        {
            mp[head2->data]++;
            head2=head2->next;
        }
        head1=rev(head1);
        Node *n=NULL;
        while(head1)
        {
            if(mp.find(head1->data)!=mp.end())
            {
                Node *t=new Node(head1->data);
                t->next=n;
                n=t;
            }
             head1=head1->next;
        }
        return n;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends