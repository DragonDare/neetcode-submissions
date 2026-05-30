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
        vector<int> o(2);

        o[0] = k;

        goLeft(root, o);

        return o[1];
    }

private:
    void goLeft(TreeNode* root, vector<int>& o){
        if (!root || o[0] == 0) return;

        goLeft(root->left, o);

        --o[0];

        if (o[0] == 0){
            o[1] = root->val;
            return;
        }

        goLeft(root->right, o);
    }
};
