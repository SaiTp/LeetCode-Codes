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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        int cnt=0;
        ListNode *t=head;
        while(t)
        {
            cnt++;
            t=t->next;
        }
        int k=cnt/2-1;
        t=head;
        while(k--)
        {
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};