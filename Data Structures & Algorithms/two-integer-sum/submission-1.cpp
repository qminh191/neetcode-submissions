class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = 1;
        int def = target - nums[i];
        while(i != j && def != nums[j]) {
            if(size_t(j) < nums.size() - 1) {
                j++;
            } else if(size_t(i) < nums.size() - 2) {
                i++;
                j = i + 1;
                def = target - nums[i];
            } else 
                break;
        }

        vector<int> res = {i, j};
        return res;
    }
};
