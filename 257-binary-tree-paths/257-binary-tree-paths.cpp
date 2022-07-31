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
    void btp(vector<string>& result, TreeNode* root, string s){
        if(!root->left && !root->right){
            result.push_back(s);
            return;
        }
        if(root->left) btp(result, root->left, s+"->"+to_string(root->left->val));
        if(root->right) btp(result, root->right, s+"->"+to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root) return result;
        btp(result, root, to_string(root->val));
        return result;
    }
};