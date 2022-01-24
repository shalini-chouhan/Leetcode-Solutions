class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sNums;

        for (int i=0; i<nums.size(); i++) {
            if (sNums.count(target - nums[i]) > 0)
                return vector<int>({i, sNums[target-nums[i]]});
            
            sNums.insert(std::make_pair(nums[i], i));
        }
        return vector<int>({0,0});
    }
};