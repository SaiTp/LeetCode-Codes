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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode *tmp=list1;
        while(tmp && count<a-1)
        {
            count++;
            tmp=tmp->next;
        }
        ListNode *first=tmp;
        tmp=list1;
        count=0;
        while(tmp && count<b)
        {
            count++;
            tmp=tmp->next;
        }
        ListNode *second=tmp;
        tmp=list2;
        while(tmp->next)
        {
            tmp=tmp->next;
        }
        first->next=list2;
        tmp->next=second->next;
        return list1;
    }
};