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
    int sum=0;
    void preorder(TreeNode *root,int cur)
    {
        if(root)   
        {
        cur=(cur*2)+(root->val);
        if(!root->left && !root->right)
        sum+=cur;
        preorder(root->left,cur);
        preorder(root->right,cur);
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        preorder(root,0);
        return sum;
    }
};