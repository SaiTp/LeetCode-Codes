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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *sent=new ListNode(0,head);
        ListNode *p=sent;
        while(head)
        {
            if(head->next && head->val==head->next->val)
            {
                while(head->next && head->val==head->next->val)
                    head=head->next;
                p->next=head->next;
            }
            else
                p=p->next;
            head=head->next;
        }
        return sent->next;
    }
};