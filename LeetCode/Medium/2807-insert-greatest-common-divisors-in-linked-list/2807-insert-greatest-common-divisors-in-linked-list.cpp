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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* first = head;
        ListNode* second = head->next;

        while(first->next){
            ListNode* mid = new ListNode(gcd(first->val,second->val));
            mid->next = second;
            first->next = mid;
            first = second;
            second = second->next;
        }
        return head;
    }
};