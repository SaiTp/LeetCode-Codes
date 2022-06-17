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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *c=head,*n,*p=NULL;
        ListNode * nextHead = head;
        for (int i=0; i<k; ++i) {
          if (!nextHead)
          {
              return head;
          }
          nextHead = nextHead->next;
    }
        int co=0;
        while(c && co<k)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            co++;
        }
        
        if(n)
        {
            head->next=reverseKGroup(n,k);
        }
        return p;
    }
};