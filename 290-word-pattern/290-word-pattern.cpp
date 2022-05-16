class Solution {
public:
    bool wordPattern(string pattern, string str) {
        if (pattern.empty() && str.empty()) return true;
        if (pattern.empty() || str.empty()) return false;
        
        map<char, string> p2s;
        map<string, char> s2p;
        int j = 0;
        for (int i=0; i<pattern.size(); ++i) {
            if (j == str.size()) return false;
            char ch = pattern[i];
            
            int pos = str.find_first_of(" ", j);
            if (pos == string::npos) {
                pos = str.size();
            } 
            string word = str.substr(j, pos-j);
            
            j = pos == str.size()? pos : pos + 1;
            
            if (p2s.count(ch) == 0 && s2p.count(word) == 0) {
                p2s[ch] = word;
                s2p[word] = ch;
            } else if (p2s[ch] != word || s2p[word] != ch) {
                return false;
            }
        }
        
        return j == str.size();
    }
};