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
    int p = 0, i = 0;

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, INT_MAX);
    }

private:
    TreeNode* build (vector<int>& preorder, vector<int>& inorder, int limit){
        if (p >= preorder.size()) return nullptr;

        if (inorder[i] == limit){
            ++i;
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[p++]);

        root->left = build(preorder, inorder, root->val);
        root->right = build(preorder, inorder, limit);

        return root;

    }
};
