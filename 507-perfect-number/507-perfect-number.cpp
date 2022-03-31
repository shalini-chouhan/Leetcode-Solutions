class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        if(num==2) return false;
        int i=1;
        int count=0;
        while(i<=num/2){
            if(num%i==0) count+=i;
            i++;
        }
        if(count==num) return true;
        return false;
    }
};