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
    map<int,int>m;
    void inoder(TreeNode* root)
    {
        if(!root)
            return;
        inoder(root->left);
        m[root->val]++;
        inoder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inoder(root);
        vector<int>res;
        int cmax=INT_MIN;
        for(auto i:m)
        {
            if(cmax<i.second)
                cmax=i.second;
        }
         for(auto i:m)
        {
            if(cmax==i.second)
                res.push_back(i.first);
        }
        return res;
    }
};