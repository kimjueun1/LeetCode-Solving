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
    bool DFS(TreeNode* root, int x) {
        if(!root) return true;
        return root->val == x && DFS(root->left, x) && DFS(root->right, x);
    }
    bool isUnivalTree(TreeNode* root) {
        return DFS(root, root->val);
    }
};