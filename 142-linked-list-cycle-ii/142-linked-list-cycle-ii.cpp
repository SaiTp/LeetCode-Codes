/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode *f,*s;
        s=f=head;
        int fl=0;
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                fl=1;
                break;
            }
        }
        if(!fl)
            return NULL;
        s=head;
        while(s!=f)
        {
            s=s->next;
            f=f->next;
        }
        return s;
    }
};