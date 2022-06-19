// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node *rev(Node * head)
{
Node *c=head,*n,*p=NULL;
while(c)
{
n=c->next;
c->next=p;
p=c;
c=n;
}
return p;
}
 Node* reverseBetween(Node* head, int left, int right)
    {
        //code here
        if(left==right)
return head;
Node *l=head,*r=head,*lp=NULL;
while(left-1)
{
lp=l;
l=l->next;
left--;
}
while(right-1)
{
r=r->next;
right--;
}
Node *rn=r->next;
r->next=NULL;
if(lp)
lp->next=rev(l);
else
head=rev(l);
while(l->next)
{
l=l->next;
}
l->next=rn;
return head;
}
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends