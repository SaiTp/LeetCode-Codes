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
    ListNode* rev(ListNode * head)
    {
        ListNode *c=head,*n,*p=NULL;
        while(c)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        ListNode *l=head,*r=head,*lp=NULL;
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
        ListNode *rn=r->next;
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