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
    vector<int>in;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        root=new TreeNode(in[0]);
        TreeNode *cur;
        cur=root;
        for(int i=0;i<in.size();i++)
        {
            cur->right=new TreeNode(in[i]);
            cur=cur->right;
        }
        return root->right;
    }
};