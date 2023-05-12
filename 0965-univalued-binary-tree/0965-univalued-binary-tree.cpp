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

    int solve(TreeNode* root,int x){
        if(!root)
        return 1;

        if(root->val!=x)
        return 0;

        return solve(root->left,x) and solve(root->right,x);

    }

    bool isUnivalTree(TreeNode* root) {
        if(!root)
        return 0;
        return solve(root,root->val);
        
    }
};