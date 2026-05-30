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
    int kthSmallest(TreeNode* root, int k) {
        int o;

        goLeft(root, o, k);

        return o;
    }

private:
    void goLeft(TreeNode* root, int& o, int& k){
        if (!root || k == 0) return;

        goLeft(root->left, o, k);

        --k;

        if (k == 0){
            o = root->val;
            return;
        }

        goLeft(root->right, o, k);
    }
};
