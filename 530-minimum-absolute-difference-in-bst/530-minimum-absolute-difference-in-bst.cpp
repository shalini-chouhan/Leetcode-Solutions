class Solution {
public:
    int i=INT_MAX,n=0;
    int m=INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        DFS(root);
        return m;
    }
    void DFS(TreeNode* root)
    {
        if(root->left!=NULL)DFS(root->left);
        n=root->val;
        m=min(m,abs(n-i));
        i=n;
        if(root->right!=NULL)DFS(root->right);
    }
};