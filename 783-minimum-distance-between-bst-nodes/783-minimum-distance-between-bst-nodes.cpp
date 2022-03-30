class Solution {
public:
	int minDiffInBST(TreeNode* root) {
		TreeNode*prev = 0;
		int ans = INT_MAX;
		dfs(root,ans,prev);
		return ans;
	}
	void dfs(TreeNode* root,int &ans,TreeNode* &prev){
		if(root==NULL)
			return;
		dfs(root->left,ans,prev);
		if(prev!=NULL)
		ans = min (ans , root->val-prev->val);
		prev=root;
		dfs(root->right,ans,prev);
	}
};
