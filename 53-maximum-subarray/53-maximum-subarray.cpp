class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        if(nums.size() == 0)
            return 0;
        
        int ans = nums[0];
        int last = nums[0];
        
        
        for(int i = 1; i < nums.size(); i++) {
            
            
            if(last + nums[i] > nums[i])
                last = last + nums[i];
            
            else
                last = nums[i];
            
            ans = max(ans, last);
            
        }

        return ans;
    }
};