/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *t=head,*l;
        if(!head)
            return NULL;
        int n=0;
        while(t)
        {
            n++;
            if(t->next==NULL)
                l=t;
            t=t->next;
        }
        k=k%n;
        if(k==0)
            return head;
        int temp=n-k-1;
        t=head;
        while(temp)
        {
            t=t->next;
            temp--;
        }
        l->next=head;
        head=t->next;
        t->next=NULL;
        return head;
    }
};