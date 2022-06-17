/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node *t=head;
        if(!head)
            return NULL;
        while(t)
        {
            Node *n=new Node(t->val);
            n->next=t->next;
            t->next=n;
            t=t->next->next;
        }
        t=head;
        Node *tt=head->next;
       
        while(t && t->next)
        {
            if(t->random)
            tt->random=t->random->next;
            else
            tt->random=NULL;
            t=t->next->next;
            if(t)
            tt=t->next;
        }
        Node *h2=head->next;
        tt=head->next;
        t=head;
        while(t && t->next )
        {
            t->next=t->next->next;
            if(tt->next)
            tt->next=tt->next->next;
            t=t->next;
            tt=tt->next;
        }
        return h2;
    }
};