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
     void makeParents(TreeNode* Node, unordered_map <TreeNode*,TreeNode*> &ump){
        if(!Node)
            return;
        queue <TreeNode*> q;
        q.push(Node);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left){
                ump[temp->left] = temp; 
                q.push(temp->left);
            }
            if(temp->right){
                ump[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector <int> ans;
        if(!root)
            return ans;
        unordered_map <TreeNode*,TreeNode*> ump;
        makeParents(root,ump);
        unordered_map <TreeNode*,bool> visited;
        queue <TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int cnt = 0;
        while(!q.empty()){
            int size = q.size();
            if(cnt == k)
                break;
            cnt++;
            for(int i=0;i<size;i++){
                TreeNode* Node = q.front();
                q.pop();
                if(Node->left && !visited[Node->left]){
                    q.push(Node->left);
                    visited[Node->left] = true;
                }
                if(Node->right && !visited[Node->right]){
                    q.push(Node->right);
                    visited[Node->right] = true; 
                }
                if(ump[Node] && !visited[ump[Node]]){
                    q.push(ump[Node]);
                    visited[ump[Node]] = true;
                }
            }
        }
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};