class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty()) {
            return {};
        }
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 0; i < size - 2; i++) {
            if(i != 0 && nums[i] == nums[i - 1]) continue;
            if(nums[i] > 0) break;

            int l = i + 1;
            int r = size - 1;
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1] && nums[r] == nums[r + 1]) {
                        l++;
                        r--;
                    }
                } else if(sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }

        return res;
    }
};
