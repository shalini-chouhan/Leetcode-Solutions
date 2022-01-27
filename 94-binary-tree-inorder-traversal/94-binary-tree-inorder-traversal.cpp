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
    void traverse(vector<int>& inorder, TreeNode* root)
    {
        if (root->left != nullptr) traverse( inorder, root->left );
        inorder.push_back( root->val );
        if (root->right != nullptr) traverse( inorder, root->right );
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if (root == nullptr) return inorder;
        
        // 1. recursion
        //traverse( inorder, root );
        
        // 2. iteration
        stack<TreeNode*> tracer;
        TreeNode* node = root;
        while (node != nullptr || !tracer.empty()) {
            while (node != nullptr) {
                tracer.push( node );
                node = node->left;
            }
            node = tracer.top();
            inorder.push_back( node->val );
            tracer.pop();
            node = node->right;
        }
        
        return inorder;
    }
};