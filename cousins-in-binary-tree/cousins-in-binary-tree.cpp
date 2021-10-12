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
    void findparent(TreeNode* root,int x,TreeNode *&p)
    {
        if(!root)
            return;
        findparent(root->left,x,p);
        findparent(root->right,x,p);
        if(!p)
        {
            if(root->left && root->left->val==x)p=root;
            if(root->right && root->right->val==x)p=root;
        }
    }
    void findlevel(TreeNode *root,int x,int &l,int count)
    {
        if(!root)
            return ;
        findlevel(root->left,x,l,count+1);
        findlevel(root->right,x,l,count+1);
        if(l==-1)
            if(root->val==x)
                l=count;
    }
    bool isCousins(TreeNode* root, int x, int y) {
      TreeNode *p1,*p2;
        p1=NULL;
        p2=NULL;
        findparent(root,x,p1);
        findparent(root,y,p2);
        int lx=-1,ly=-1;
        findlevel(root,x,lx,0);
        findlevel(root,y,ly,0);
        if(p1!=p2 && lx==ly)
            return true;
        return false;
    }
};