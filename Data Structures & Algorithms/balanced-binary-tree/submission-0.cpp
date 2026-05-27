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
    bool isBalanced(TreeNode* root) {
        int res = 0;
        bool isBal = true;
        height(root, res, isBal);

        return isBal;
    }

    int height(TreeNode* root, int& res, bool& isBal){
        if (root){
            int left = height(root->left, res, isBal);
            int right = height(root->right, res, isBal);

            if (abs(left - right) > 1) isBal = false;

            return 1 + max(left, right);
        }

        return 0;
    }
};
