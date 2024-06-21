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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        pair<int, int> result = traverseTree(root);
        return result.first;
    }

    pair<int, int> traverseTree(TreeNode* node) {
        if(node == NULL) {
            return make_pair(0,0);
        }

        pair<int, int> left = traverseTree(node->left);
        pair<int, int> right = traverseTree(node->right);

        int diameter = max(max(left.first, right.first), left.second+right.second);
        int height = max(left.second, right.second) + 1;

        pair<int, int> cur = make_pair(diameter, height);

        return cur;
    }
};