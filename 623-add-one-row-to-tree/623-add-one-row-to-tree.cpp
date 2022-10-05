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
    void solve(TreeNode * &root, int val ,int depth)
  {
    if(root==NULL)
    {
        return;
    }
   
    // if depth is not at the leaf node and left subtree exists
    if(depth==0 && root->left)
    {
        TreeNode * n=new TreeNode(val);
        n->left=root->left;
        n->right=NULL;
        root->left=n;
         
        
    }
     // if depth is not at the leaf node and right subtree exists
    if(depth==0 && root->right)
    {
        TreeNode * nn=new TreeNode(val);
        nn->right=root->right;
        nn->left=NULL;
        root->right=nn;
    }
    // if we are on the leaf node
    if(depth==0 && root->left==NULL  )
    {
        TreeNode * n=new TreeNode(val);
      
        root->left=n;
      
        
    }
      if(depth==0 && root->right==NULL  )
    {
        TreeNode * n=new TreeNode(val);
      
        root->right=n;
      
        
    }
     solve(root->left ,val,depth-1);
     solve(root->right,val,depth-1);
}
TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    depth-=2;
    // if we have to insert the node at root level
    if(depth==-1)
    {
         TreeNode * n=new TreeNode(val);
        n->left=root;
        return n;
    }
    solve(root,val,depth);
    return root;
}
};