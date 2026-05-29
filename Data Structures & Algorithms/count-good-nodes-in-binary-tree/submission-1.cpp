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
    int goodNodes(TreeNode* root) {
        int c = 0, res = root->val;

        goDeep(root, res, c);

        return c;
    }

private:
    void goDeep(TreeNode* root, int res, int& c){
        if (!root) return;
        if (root->val >= res) {
            ++c;
            res = root->val;
        }
        goDeep(root->left, res, c);
        goDeep(root->right, res, c);
    }
};
