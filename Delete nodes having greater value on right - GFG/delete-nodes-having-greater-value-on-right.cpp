// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node* reverse(Node* root){
    Node* prev = NULL;
    Node* head = root;
    while(head){
        Node* temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}
class Solution{
    public:
    Node *compute(Node *head){
        Node* ptr1 = head;
        Node* ptr2 = reverse(head);
        Node* ptr3 = ptr2;
        
        while(ptr3->next){
            if(ptr3->data > ptr3->next->data)
                ptr3-> next = ptr3->next->next;
            else
                ptr3 = ptr3->next;
        }
        
        Node* ansHead = reverse(ptr2);
        return ansHead;
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends