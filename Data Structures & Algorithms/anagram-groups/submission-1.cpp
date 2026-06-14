class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        unordered_map<string, vector<string>> res;
        for(int i = 0; i < size; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());

            if(res.find(s) == res.end()) {
                res[s] = {};
            }
            res[s].push_back(strs[i]);
            
        }

        vector<vector<string>> res1;
        for(const auto& [key, value] : res) {
            res1.push_back(res[key]);
        }
        return res1;
    }
};
