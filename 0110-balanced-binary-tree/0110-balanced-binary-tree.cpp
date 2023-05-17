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
    int balancedUtil(TreeNode* root) {
       if(root == nullptr) return 0; 
       int lh = balancedUtil(root->left), rh = balancedUtil(root->right);
       if(lh == -1 || rh == -1) return -1;
        if(abs(lh-rh) > 1) return -1;
        return max(rh,lh)+1;


    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        return balancedUtil(root) != -1;
    }



};