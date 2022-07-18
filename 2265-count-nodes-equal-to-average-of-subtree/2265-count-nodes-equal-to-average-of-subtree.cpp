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
    int res = 0;
    
    pair<int,int> dfs(TreeNode* node) {
        if (node) {
            pair<int,int> left_res = dfs(node->left);
            pair<int,int> right_res = dfs(node->right);
            if ((node->val + left_res.first + right_res.first)/ ( 1 + left_res.second + right_res.second) == node->val) res++;
            return {node->val + left_res.first + right_res.first,1 + left_res.second + right_res.second};
        } return {0,0};
    }    

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return res;
    }
};