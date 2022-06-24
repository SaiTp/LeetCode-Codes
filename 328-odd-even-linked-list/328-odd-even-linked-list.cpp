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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oc,*ec,*os,*es,*p;
       oc=ec=os=es=NULL;
        if(!head || !head->next)
            return head;
       p=head;
        int c=0;
       while(p)
       {
           if(c % 2 ==1 )
           {
               if(es==NULL)
               {
                   es=ec=p;
               }
               else
               {
                   ec->next=p;
                   ec=ec->next;
               }
           }
           if(c% 2 ==0 )
           {
               if(os==NULL)
               {
                   os=oc=p;
               }
               else
               {
                   oc->next=p;
                   oc=oc->next;
               }
           }
           c++;
           p=p->next;
       }
       oc->next=es;
       ec->next=NULL;
       head=os;
        return head;
    }
};