/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode*ans,*t;
    void inorder(TreeNode* original, TreeNode* cloned)
    {
        if(original)
        {
            inorder(original->left,cloned->left);
            if(original==t)
                ans= cloned;
            inorder(original->right,cloned->right);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        t=target;
        inorder(original,cloned);
        return ans;
    }
};