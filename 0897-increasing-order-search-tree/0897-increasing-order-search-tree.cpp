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
    
    void inorderutil(TreeNode* root, vector<int> &vals) {
        if(root == nullptr) return ;
        inorderutil(root->left, vals);
        vals.push_back(root->val);
        inorderutil(root->right, vals);
        return ;
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        
        //write inorder. for every node thats current, create a new node with left as null and right as curr. start from dummy. this creates a new tree
        if(root == nullptr) return (TreeNode*)nullptr;
        
        vector<int> vals;
        inorderutil(root, vals);
        TreeNode* head = new TreeNode(0); TreeNode* curr = head;
        
        for(auto val: vals) {
            TreeNode* temp = new TreeNode(val);
            curr->right = temp;
            curr = curr->right;
        }
        
        return head->right;
    }
};