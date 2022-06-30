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
   vector<string> result;
    void travers(TreeNode* root, string str){
        if(root != NULL){
            str = str+to_string(root->val);
           if(root->left == NULL && root->right == NULL) {
               result.push_back(str);
               return;
           }
           str = str+"->";
           travers(root->left,str);
           travers(root->right,str);
        }
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        travers(root,"");
        return result;
    }
};