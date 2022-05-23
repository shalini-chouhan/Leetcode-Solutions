class Solution {
public:
    bool check(TreeNode* first, TreeNode* second) {
        if(!first && !second) return true;
        if(!(first && second)) return false;
        return (first->val == second->val && check(first->left, second->right) && check(first->right, second->left));
        
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        bool result = check(root->left, root->right);
        return result;
    }
};