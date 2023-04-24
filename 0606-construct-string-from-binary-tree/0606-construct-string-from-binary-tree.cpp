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
    
    void preorder(TreeNode* curr, string &res) {
        
        if(curr == nullptr) return ;
        res += to_string(curr->val);
        if(!curr->left && !curr->right) return ;
        // if(curr->left) {
            res += '(';
            preorder(curr->left, res);
            res += ')';
        // }
        if(curr->right) {
            res += '(';
            preorder(curr->right, res);
            res += ')';
        }
        return ;
        
        
    }
    
    string tree2str(TreeNode* root) {
        //preorder
        queue<TreeNode*> q;
        TreeNode* curr = root;
        string res = "";
        
        preorder(curr, res);
        
        return res;
    }
};