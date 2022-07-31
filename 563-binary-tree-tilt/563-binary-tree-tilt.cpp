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
    int sum = 0;
    int findTilt(TreeNode* root) {
        DFS(root);
        return sum;
    }
    int DFS(TreeNode* root){
        if(!root) return 0;
        int leftSum = DFS(root->left);
        int rightSum = DFS(root->right);
        sum += abs(leftSum - rightSum);
        return leftSum + rightSum + root->val;
    }
};