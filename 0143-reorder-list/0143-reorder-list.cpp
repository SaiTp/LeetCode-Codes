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
   void reorderList(ListNode* head) {
		auto mid = head;
		for (auto fast = head; fast; ) {
			fast = fast->next;
			mid = mid->next;
			if (fast) fast = fast->next;
		}

		mid = reverseList(mid);
		auto node1 = head;
		for (auto node2 = mid; node2; ) {
			auto next1 = node1->next;
			auto next2 = node2->next;
			node1->next = node2;
			node2->next = next1;
			node1 = next1;
			node2 = next2;
		}
		if (node1) {
			node1->next = nullptr;
		}
	}
private:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr) return head;
		auto pre = head;
		for (auto cur = pre->next; cur; ) {
			auto next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		head->next = nullptr;
		return pre;
	}
};