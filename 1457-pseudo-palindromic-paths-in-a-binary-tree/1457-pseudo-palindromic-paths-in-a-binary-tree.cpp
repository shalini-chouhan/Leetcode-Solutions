class Solution {
public:
    int cnt=0;
    void paths(TreeNode* root, unordered_map<int, int> m, int size){
        if(!root->left && !root->right){
            m[root->val]++;
            size++;
            if(size&1){
                bool flag=0;
                for(auto itr=m.begin(); itr!=m.end(); itr++){
                    if(!(itr->second & 1))
                        continue;
                    if(itr->second & 1 && !flag)
                        flag=1;
                    else
                        return;
                }
            }
            else{
                for(auto itr=m.begin(); itr!=m.end(); itr++)
                    if(itr->second & 1)
                        return;
            }
            cnt++;
            return;
        }
        m[root->val]++;
        size++;
        if(root->left)
            paths(root->left, m, size);
        if(root->right)
            paths(root->right, m, size);
        return;
            
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int, int> m={};
        cnt=0;
        paths(root, m, 0);
        return cnt;
    }
};