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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        longestPath(root, diameter);
        return diameter;
    }
    int longestPath(TreeNode * root, int &d){
        if(root == NULL) return 0;
        int left = longestPath(root->left, d);
        int right = longestPath(root->right, d);
        d = max(d, left+right);
        return max(left, right)+1;
    }
};