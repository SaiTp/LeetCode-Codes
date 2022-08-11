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
class FindElements {
public:
     FindElements(TreeNode* root) {
        recover(root, 0);
    }
    
    void recover(TreeNode* node, int x)
    {
        if(!node)
        {
            return;
        }
        m.insert(x);
        recover(node->left, 2 * x + 1);
        recover(node->right, 2 * x + 2);
    }
    
    bool find(int target) {
        return m.find(target) != m.end();
    }
private:
    unordered_set<int> m;
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */