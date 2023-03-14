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
     vector<string>v;
    string s;
    void helper(TreeNode *root)
    {
        
        if(root==NULL)
        {
            return;
        }
        s+=to_string(root->val);
        if(!root->left && !root->right)
            v.push_back(s);
        
        if(root->left)
            helper(root->left);
        
        if(root->right)
            helper(root->right);
        
        s.pop_back(); 
        
    }
    
    int sumNumbers(TreeNode* root) {
        helper(root);
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            ans+=stoi(v[i]);
        }
        return ans;
        
    }
};