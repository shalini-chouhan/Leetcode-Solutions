class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v1;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *frnt=q.front();
                q.pop();
                v1.push_back(frnt->val);
                if(frnt->left)q.push(frnt->left);
                if(frnt->right)q.push(frnt->right);
            }
            v.push_back(v1);
        }
        return v;
    }
};