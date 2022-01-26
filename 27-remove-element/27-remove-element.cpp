class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ctr=0;
         for (auto i = nums.begin(); i != nums.end(); ++i) {
        if (*i == val) {
            nums.erase(i);
            i--;
        }
             else ctr++;
    }
        return ctr;
    }
};