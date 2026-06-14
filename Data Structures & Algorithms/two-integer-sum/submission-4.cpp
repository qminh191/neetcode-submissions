class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> dict;

        for(int i = 0; i < size; i++) {
            int def = target - nums[i];
            if(dict.find(def) != dict.end()) {
                vector<int> res = {dict[def], i};
                return res;
            } else 
                dict[nums[i]] = i;
        }
        return {0, 0};
    }
};
