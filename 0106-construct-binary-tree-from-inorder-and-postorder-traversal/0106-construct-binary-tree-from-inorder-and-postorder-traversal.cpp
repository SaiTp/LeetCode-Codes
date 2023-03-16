class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return formBinaryTree(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }

    TreeNode* formBinaryTree(vector<int>& inOrder, vector<int>& postOrder, int start, int end, int start2, int end2) {
        if (start > end) {
            return nullptr;
        }
        TreeNode* middle = new TreeNode(postOrder[end2]);
        int mid = 0;
        for (int i = start; i <= end; i++) {
            if (inOrder[i] == middle->val) {
                mid = i;
                break;
            }
        }
        int noOfElements = mid - 1 - start;
        int x = noOfElements + start2; // i.e the end of postOrderTraversal of left subtree
        middle->left = formBinaryTree(inOrder, postOrder, start, mid - 1, start2, x);
        middle->right = formBinaryTree(inOrder, postOrder, mid + 1, end, x + 1, end2 - 1);
        return middle;
    }
};