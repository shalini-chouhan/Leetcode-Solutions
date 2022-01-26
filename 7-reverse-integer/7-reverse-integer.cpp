class Solution {
public:
    int reverse(int x) {
        try{
            string s = to_string(abs(x));
            std::reverse(s.begin(), s.end());
            if(x < 0)
                s = "-" + s;
            return stoi(s);
        }
        catch(const std::exception& e){
            return 0;
        }
    }
};