#include <vector>
#include <deque>
#include <unordered_set>

class Solution {
public:
    bool validateBinaryTreeNodes(int n, std::vector<int>& leftChild, std::vector<int>& rightChild) {
        std::deque<int> queue; // Create a queue for BFS traversal.
        std::unordered_set<int> visited; // Create a set to track visited nodes.
        int root = findRoot(n, leftChild, rightChild); // Find the root of the tree.
        if (root == -1) return false; // If there is no valid root, return false.

        queue.push_back(root); // Start the BFS from the root node.
        while (!queue.empty()) {
            int node = queue.front(); // Dequeue a node for processing.
            queue.pop_front();
            if (node == -1) continue; // Skip null nodes.

            if (!visited.insert(node).second) return false; // If the node is visited again, return false.

            int left = leftChild[node];
            int right = rightChild[node];

            queue.push_back(left); // Enqueue the left child.
            queue.push_back(right); // Enqueue the right child.
        }

        return visited.size() == n; // Check if all nodes have been visited once (i.e., one connected component).
    }

private:
    int findRoot(int n, std::vector<int>& left, std::vector<int>& right) {
        std::unordered_set<int> set;
        for (int i = 0; i < n; i++) set.insert(i); // Initialize a set with all node indices.
        for (int node : left) set.erase(node); // Remove left child nodes from the set.
        for (int node : right) set.erase(node); // Remove right child nodes from the set.

        return set.size() == 1 ? *set.begin() : -1; // Return the root node if there's only one, or -1 if none or multiple.
    }
};