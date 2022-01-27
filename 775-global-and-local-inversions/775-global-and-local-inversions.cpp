class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        if(A.empty()) return false;
        for(int i = 0;i<A.size();++i) {
            if(abs(A[i]-i)>1) return false; 
        }
        return true;
    }
};