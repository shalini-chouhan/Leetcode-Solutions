class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mx = 0,mx1 = 0,mn = 10000,mn1 = 10000;
        for(auto &i:nums){
            if(i>=mx){
                mx1 = mx;
                mx = i;
            }
            else{
                mx1 = max(mx1,i);
            }
            if(i<=mn){
                mn1 = mn;
                mn = i;
            }
            else{
                mn1 = min(mn1,i);
            }
        }
        return (mx*mx1)-(mn*mn1);
    }
};