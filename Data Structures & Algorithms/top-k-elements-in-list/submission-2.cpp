class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        for(int i : nums) dict[i]++;

        vector<vector<int>> res (nums.size() + 1);
        for(const auto& [key, value] : dict) res[value].push_back(key);
        int size = res.size();

        vector<int> res1;
        for(int i = size - 1; i >= 0; i--) {
            for(int a : res[i]) {
                res1.push_back(a);
                if(res1.size() >= size_t(k))
                    return res1;
            }
        }
        return res1;
    }
};
