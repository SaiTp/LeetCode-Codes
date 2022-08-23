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
    bool isPalindrome(ListNode* head) {
        string str;
        int i,j;
        while(head)
        {
            str+=(head->val)-'0';
            head=head->next;
        }
        for(i=0,j=str.size()-1;i<j;i++,j--)
        {
            if(str[i]!=str[j])
                return false;
        }
        return true;
    }
};