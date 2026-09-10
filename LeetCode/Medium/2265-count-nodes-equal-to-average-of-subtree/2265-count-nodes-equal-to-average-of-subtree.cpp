/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void postOrder(TreeNode* root,int& gSum, int& gN, int& count){
    if(!root) return;
    
    int sum = root->val;
    int n = 1;

    postOrder(root->left,sum,n,count);
    if(root->left){
        sum += root->left->val;
        n++;
    }
    
    postOrder(root->right,sum,n,count);
    if(root->right){
        sum += root->right->val;
        n++;
    }

    if(sum/n == root->val) count++;

    gSum += sum;
    gN += n;
}

class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        int gSum = 0;
        int gN = 0;
        int count = 0;
        postOrder(root,gSum,gN,count);
        return count;
    }
};
