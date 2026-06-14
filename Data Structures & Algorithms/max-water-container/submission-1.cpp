class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = INT_MIN;
        int l = 0, r = heights.size() - 1;
        while(l < r) {
            
            int tich = min(heights[r], heights[l]) * (r - l);
            res = max(tich, res);

            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return res;
    }
};
