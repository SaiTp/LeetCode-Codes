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
    vector<int>temp;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int m=INT_MAX;
        for(int i=0;i<temp.size()-1;i++)
        {
            if(temp[i+1]-temp[i]<m)
                m=temp[i+1]-temp[i];
        }
        return m;
    }
};