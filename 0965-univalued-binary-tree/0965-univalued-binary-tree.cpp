class Solution {
public:
    set<int> unique;
    void traverse(TreeNode* root)
    {
        if(root)
        {
            traverse(root->left);
            traverse(root->right);
            unique.insert(root->val);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        traverse(root);
        return unique.size() == 1;
    }
};