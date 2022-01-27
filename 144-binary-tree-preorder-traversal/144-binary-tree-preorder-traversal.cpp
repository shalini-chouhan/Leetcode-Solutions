class Solution {
public:
    vector<int>ret;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root) {
            ret.push_back(root->val);
            if(root->left) preorderTraversal(root->left);
            if(root->right) preorderTraversal(root->right);
        }
        return ret;
    }
};