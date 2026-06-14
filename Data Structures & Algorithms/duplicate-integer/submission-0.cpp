class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        for(size_t i = 0; i < nums.size(); i++) {
            int n = nums[i];
            for(size_t j = i + 1; j < nums.size(); j++) {
                if(n == nums[j]) {
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }

        return flag;
    }
};