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
    ListNode* partition(ListNode* head, int x) {
         if(!head || !head->next) return head;
    ListNode *f=NULL,*fh=NULL,*s=NULL,*sh=NULL,*hh=head;
    while(head){
      if(head->val < x)
        if(!f){f = new ListNode(head->val); fh = f;}
        else  {f->next = new ListNode(head->val); f=f->next;}
      else
        if(!s){s = new ListNode(head->val);sh = s;}
        else  {s->next = new ListNode(head->val);s=s->next;}
            
      head=head->next;
    }
    if(!f || !s) return hh;
    else{f->next = sh;return fh;}
    }
};