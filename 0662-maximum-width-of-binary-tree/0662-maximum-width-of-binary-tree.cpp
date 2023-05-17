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
    int widthOfBinaryTree(TreeNode* root) {
        //run modified bfs or level order traversal
        if(!root) return 0;
        int ans = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        while(!q.empty()) {
            long long first = 0, last = 0;

            long qsize = q.size();
            // pair<TreeNode*, int> qfront = q.front();
            // q.pop();
            long levelMin = q.front().second;
            for(int i = 0; i < qsize; i++) {
                TreeNode* node = q.front().first;
                long curr_id = q.front().second - levelMin;
                q.pop();
                //update first, last
                if(i==0) first = curr_id;
                if(i==qsize-1) last = curr_id;

                if(node->left) q.push({node->left, 2*curr_id+1});
                if(node->right) q.push({node->right, 2*curr_id+2});

            }
            ans = max(ans, (int)(last-first+1));

        }//while

        

        return ans;
    }
};