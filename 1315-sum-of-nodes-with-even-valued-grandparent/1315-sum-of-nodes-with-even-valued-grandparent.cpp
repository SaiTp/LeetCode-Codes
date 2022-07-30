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
    int sumEvenGrandparent(TreeNode* root) {

        
        return sumEvenGrandparent(root, false, false);
        
    }
    
    int sumEvenGrandparent(TreeNode* root, bool parent, bool grandParent) {
        if(root == NULL)
            return 0;
        
        bool current = false;
        
        if(root->val % 2 == 0)
            current = true;
        
        int leftSum = sumEvenGrandparent(root->left, current, parent) ;
        int rightSum = sumEvenGrandparent(root->right, current, parent);
        
        if(grandParent) {
            return  leftSum + rightSum + root -> val;
        }
        else {
            return  leftSum + rightSum;
        }
        
        
    }
};