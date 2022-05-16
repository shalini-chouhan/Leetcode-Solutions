class Solution {
public:
    void traverse(TreeNode* node, int length, int& shortest)
    {
        if (node->left == NULL && node->right == NULL)
        {
            shortest = min(shortest, length);
            return;
        }

        if (node->left != NULL)
            traverse(node->left, length + 1, shortest);

        if (node->right != NULL)
            traverse(node->right, length + 1, shortest);

    }

    int minDepth(TreeNode* root)
    {
        if (root == NULL) return 0;
        int shortest = INT_MAX;
        traverse(root, 1, shortest);
        return shortest;
    }
};