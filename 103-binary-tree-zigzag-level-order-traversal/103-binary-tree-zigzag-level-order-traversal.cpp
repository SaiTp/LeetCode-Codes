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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>> res;
        if(!root)
            return res;
        int f=0;
        q.push(root);
        while(!q.empty())
        {
            int c=q.size();
            vector<int>v;
            for(int i=0;i<c;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                v.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            if(!f)
            {
                res.push_back(v);
                f=1;
            }
            else
            {
                f=0;
                reverse(v.begin(),v.end());
                res.push_back(v);
            }
        }
        return res;
    }
};