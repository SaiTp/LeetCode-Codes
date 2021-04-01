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
    vector<int> temp;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
            
    }
    int getMinimumDifference(TreeNode* root) {
     int i,ans=INT_MAX;
        if(!root)
            return 0;
        inorder(root);
        for(i=0;i<temp.size()-1;i++)
        {
            ans=min(ans,temp[i+1]-temp[i]);
        }
        return ans;
    }
};