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
    vector<TreeNode*>t;
    void inorder(TreeNode *root)
    {
        if(!root)
            return;
        inorder(root->left);
        t.push_back(root);
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        TreeNode *first,*mid,*last;
        first=mid=last=NULL;
        for(int i=0;i<t.size()-1;i++)
        {
            if(!first && t[i]->val>t[i+1]->val)
            {
                first=t[i];
                mid=t[i+1];
            }
            else if(t[i]->val>t[i+1]->val)
            {
                last=t[i+1];
            }
        }
        if(first && last)
            swap(first->val,last->val);
        else if(first && mid)
            swap(first->val,mid->val);
    }
};