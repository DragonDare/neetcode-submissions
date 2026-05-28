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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> output;
        queue<TreeNode*> q;

        q.emplace(root);

        while (!q.empty()){
            int len = q.size();
            vector<int> lvl;

            for (int i = 0; i < len; ++i){
                TreeNode* node = q.front();
                q.pop();

                if (node){
                    lvl.push_back(node->val);

                    q.emplace(node->left);
                    q.emplace(node->right);
                }
            }

            if (!lvl.empty()) output.push_back(lvl);
        }

        return output;
    }
};
