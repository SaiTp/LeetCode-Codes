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
    ListNode* reverse(ListNode* head)
    {
        ListNode *prev=NULL,*cur=head,*nxt=NULL;
        while(cur)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode *f=head,*s=head;
        while(f && f->next)
        {
            f=f->next->next;
            s=s->next;
        }
        int mx=0;
        ListNode *t=reverse(s);
        while(t)
        {
            mx=max(head->val+t->val,mx);
            head=head->next;
            t=t->next;
        }
        return mx;
    }
};