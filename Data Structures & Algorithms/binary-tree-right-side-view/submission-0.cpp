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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};

        vector<int> o;
        queue<TreeNode*> q;
        
        q.emplace(root);

        while (!q.empty()){
            TreeNode* node =  q.back();

            if (node) o.push_back(node->val);

            int len = q.size();

            for (int i = 0; i < len; ++i){
                TreeNode* front =  q.front();
                q.pop();
                if (front->left) q.emplace(front->left);
                if (front->right) q.emplace(front->right);
            }
        }

        return o;
    }
};
