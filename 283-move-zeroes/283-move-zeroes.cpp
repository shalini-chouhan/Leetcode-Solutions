class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>n;
        int zcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                n.push_back(nums[i]);
            else
                zcount++;
        }
        while(zcount>0){
            n.push_back(0);
            zcount--;
        }
        for(int i=0;i<nums.size();i++)
            nums[i]=n[i];
    }
};