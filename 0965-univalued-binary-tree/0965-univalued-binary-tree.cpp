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
    void util(TreeNode* root, int curr, bool &flag) {
        if(!root) return ;
        if(flag == false) return ;
        if(root->val != curr) flag = false;
        if(root->left) util(root->left,curr, flag);
        if(root->right) util(root->right,curr, flag);
    }
    
    bool isUnivalTree(TreeNode* root) {
        int curr = root->val;
        bool flag = true;
        //traverse
        util(root, curr, flag);
        return flag;
    }
};