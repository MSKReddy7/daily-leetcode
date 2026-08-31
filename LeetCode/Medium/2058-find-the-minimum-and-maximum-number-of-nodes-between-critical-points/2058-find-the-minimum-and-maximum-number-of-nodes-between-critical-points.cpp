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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;
        if(!next) return {-1,-1};
        

        int secMnIdx = -1;
        int mnIdx = -1;
        int mn = INT_MAX;

        int firstCriPoiIdx = -1;
        int mx = INT_MIN;
        
        int idx = 2;
        
        while(curr->next){
            bool take = false;
            take |= ((curr->val > prev->val) && (curr->val > next->val));
            take |= ((curr->val < prev->val) && (curr->val < next->val));
            if(take){
                if(mnIdx == -1) firstCriPoiIdx = idx;
                secMnIdx = mnIdx;
                mnIdx = idx;
                if(secMnIdx != -1 && mnIdx != -1)
                    mn = min(mn,mnIdx-secMnIdx);
            }
            prev = curr;
            curr = next;
            next = next->next;
            idx++;
        }
        mx = mnIdx - firstCriPoiIdx;
        if((secMnIdx == -1 || mnIdx == -1)) return {-1,-1};
        cout << mn;

        return {mn,mx};
        
    }
};