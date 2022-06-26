// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Following is the Linked list node structure */

/*
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
Node* reverseList(Node* head) {
		if (head == nullptr) return head;
		auto pre = head;
		for (auto cur = pre->next; cur; ) {
			auto next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		head->next = nullptr;
		return pre;
	}

 void reorderList(Node* head) {
		auto mid = head;
		for (auto fast = head; fast; ) {
			fast = fast->next;
			mid = mid->next;
			if (fast) fast = fast->next;
		}

		mid = reverseList(mid);
		auto node1 = head;
		for (auto node2 = mid; node2; ) {
			auto next1 = node1->next;
			auto next2 = node2->next;
			node1->next = node2;
			node2->next = next1;
			node1 = next1;
			node2 = next2;
		}
		if (node1) {
			node1->next = nullptr;
		}
	}
	