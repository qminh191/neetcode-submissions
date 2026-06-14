class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string s:strs) {
            vector<int> tmp(26, 0);
            for(char ch:s) {
                tmp[ch - 'a']++;
            }

            string key = "";
            for(int i = 0; i < 26; i++) {
                key += tmp[i];
            }

            res[key].push_back(s);
        }

        vector<vector<string>> res1;
        for(const auto& [key, value] : res) {
            res1.push_back(res[key]);
        }
        return res1;
    }
};
