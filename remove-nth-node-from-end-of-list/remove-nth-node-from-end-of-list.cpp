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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if (!head) 
            return NULL;
        
        ListNode* dummy_head = new ListNode();
        dummy_head->next = head;
        ListNode *fast = dummy_head, *slow = dummy_head;
        
        for (int i = 0; i < n; i++) 
            fast = fast->next;
        
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;        
        }
        
        ListNode *to_delete = slow->next;
        slow->next = slow->next->next;
        delete to_delete;
        
        return dummy_head->next;
    }
};