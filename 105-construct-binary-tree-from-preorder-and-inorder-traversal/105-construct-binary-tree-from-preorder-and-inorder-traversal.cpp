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
    int pind=0;
    unordered_map<int,int>mp;
    TreeNode* help(vector<int> pre,int l,int r)
    {
        if(l>r)
            return NULL;
        int ro=pre[pind++];
        TreeNode *root=new TreeNode(ro);
        root->left=help(pre,l,mp[ro]-1);
        root->right=help(pre,mp[ro]+1,r);
            return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return help(preorder,0,preorder.size()-1);
    }
};