class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> char_to_num;
        for (int i = 0; i < s.size(); i++) {
            char_to_num[s[i]] += 1;
        }
        
        int counter = 0;
        int has_odd = false;
        for (const auto& iter: char_to_num) {
            if (iter.second % 2 == 1) {
                counter += iter.second - 1;
                has_odd = true;
            }
            if (iter.second % 2 == 0) {
                counter += iter.second;
            }
        }
        if (has_odd) return counter + 1;
        return counter;
    }
};