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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int n = 1 && head;

        ln* temp = head;
        while(temp->next){
            n++;
            temp = temp->next;
        }
        k%=n;
        k = n-k;
        if(!k) return head;
        
        temp->next = head;
        for(int i=0; i<k-1; i++){
            head = head->next;
        }
        temp = head->next;
        head->next = 0;
        return temp;
    }
};