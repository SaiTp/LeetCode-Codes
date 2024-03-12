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
    ListNode* removeZeroSumSublists(ListNode* head) {
         if(!head) return 0; //null LL
        ListNode* dummy = new ListNode(0, head); 
        unordered_map<int, ListNode*> m;
        ListNode *removeAfter;
        int s = 0, tmpSum = 0;
        m[0] = dummy;
        
        for (; head; head = head -> next) {
            s += head -> val; 
            if (m.count(s)) {
                removeAfter = m[s];
                tmpSum = s;
                // remove the nodes just before head
                while (removeAfter && removeAfter != head) {
                    removeAfter = removeAfter -> next;
                    tmpSum += removeAfter -> val;
                    if (removeAfter != head) m.erase(tmpSum); 
                }
                m[s] -> next = head -> next;
            }
            else {
                m[s] = head;
            }
        }
        
        return dummy -> next;
    }
};