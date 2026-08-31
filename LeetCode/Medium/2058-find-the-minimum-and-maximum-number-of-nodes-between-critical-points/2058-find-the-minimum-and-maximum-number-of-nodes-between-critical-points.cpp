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
        
        int firstCriPoiIdx = -1;
        int prevCriPoiIdx = -1;
        int currCriPoiIdx = -1;
        
        int minDist = INT_MAX;
        int maxDist = INT_MIN;

        int idx = 2;
        
        while(curr->next){
            bool isCriPoi = false;
            isCriPoi |= ((curr->val > prev->val) && (curr->val > next->val));
            isCriPoi |= ((curr->val < prev->val) && (curr->val < next->val));

            if(isCriPoi){
                if(currCriPoiIdx == -1) firstCriPoiIdx = idx;
                prevCriPoiIdx = currCriPoiIdx;
                currCriPoiIdx = idx;
                if(prevCriPoiIdx != -1 && currCriPoiIdx != -1)
                    minDist = min(minDist,currCriPoiIdx-prevCriPoiIdx);
            }
            prev = curr;
            curr = next;
            next = next->next;
            idx++;
        }
        maxDist = currCriPoiIdx - firstCriPoiIdx;
        if((prevCriPoiIdx == -1 || currCriPoiIdx == -1)) return {-1,-1};
        cout << minDist;

        return {minDist,maxDist};
        
    }
};