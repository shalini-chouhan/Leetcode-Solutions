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
    void inorder(TreeNode* root,vector<int>&in){
        if(root == NULL)
            return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> in;vector<int> ans;
        int n = in.size();
        inorder(root,in);
        map<int,int> m;
        for(auto i : in){
            m[i]++;
        }
        int maxFreq = 0;
        for(auto i : m){
            if(i.second > maxFreq){
                maxFreq = i.second;
            }
        }
        for(auto i : m){
            if(i.second == maxFreq){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};