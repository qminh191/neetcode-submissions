class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            res[s].push_back(str);
        }

        vector<vector<string>> res1;
        for(const auto& [key, value] : res) {
            res1.push_back(value);
        }
        return res1;
    }
};
