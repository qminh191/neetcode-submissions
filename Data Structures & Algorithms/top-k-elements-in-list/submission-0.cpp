class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        vector<vector<int>> res;
        vector<int> res1;
        for(int i : nums) {
            dict[i]++;
        }

        for(const auto& [key, value] : dict) res.push_back({value, key});
        sort(res.begin(), res.end());

        int size = res.size();
        for(int i = k - 1; i >= 0; i--) {
            res1.push_back(res[size - 1 - i][1]);
        }

        return res1;
    }
};
