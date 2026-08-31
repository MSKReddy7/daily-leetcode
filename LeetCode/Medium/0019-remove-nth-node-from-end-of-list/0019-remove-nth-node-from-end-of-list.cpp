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
typedef ListNode ln;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        if(!head->next) return nullptr;
        ln* temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        if(n == k) return head->next;
        k = n-k;
        cout << k;
        temp = head;
        for(int i=1; i<k; i++){
            temp = temp->next;
        }
        cout << endl << temp->val;
        if(n-1 == k)
            temp->next = 0;
        else
            temp->next = temp->next->next;
        return head;
    }
};