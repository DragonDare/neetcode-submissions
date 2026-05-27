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
    TreeNode* invertTree(TreeNode* root) {
        invertRecursion(root);

        return root;
    }

    void invertRecursion(TreeNode* root){
        TreeNode* temp = nullptr;

        if (root){
            temp = root->right;
            root->right = root->left;
            root->left = temp;

            invertRecursion(root->left);
            invertRecursion(root->right);
        }

        return;
    }
};
