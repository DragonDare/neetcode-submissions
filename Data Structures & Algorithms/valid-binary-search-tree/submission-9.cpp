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
    bool isValidBST(TreeNode* root) {
        return compare(root->left, INT_MIN, root->val) && compare(root->right, root->val, INT_MAX);
    }

private:
    bool compare(TreeNode* root, int a, int b){
        if (!root) return true;
        if (root->val <= a || root->val >= b) return false;
        else{
            return compare(root->left, a, root->val) && compare(root->right, root->val, b);
        }
    }
};
