class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        vector<char> a1;
        vector<char> a2;
        for(size_t i = 0; i < s.length(); i++) {
            a1.push_back(s[i]);
            a2.push_back(t[i]);    
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        for(size_t i = 0; i < s.length(); i++) {
            if(a1[i] != a2[i])
                return false;
        }

        return true;
    }
};
