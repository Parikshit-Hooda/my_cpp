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
class Solution {
public:
    void util(TreeNode* root, int l, int h, int &sum) {
        if(!root) return ;
        if(root->val >= l && root->val <= h) sum += root->val;
        
        if(root->left) util(root->left,l,h,sum);
        if(root->right) util(root->right,l,h,sum);
        return ;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr) return 0;
        int sum = 0;
        util(root,low,high,sum);
        return sum;
    }
};