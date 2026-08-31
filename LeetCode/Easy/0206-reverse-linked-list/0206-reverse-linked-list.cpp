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
ListNode* reverse(ListNode* head){
    if(!head->next)
            return head;
    ListNode* rev = reverse(head->next);
    head->next->next = head; head->next = nullptr;
    return rev;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        return reverse(head);
    }
};