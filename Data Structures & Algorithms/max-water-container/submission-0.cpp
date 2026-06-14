class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = INT_MIN;
        int l = 0, r = heights.size() - 1;
        while(l < r) {
            int h, d = r - l;
            if(heights[l] > heights[r]) h = heights[r];
            else h = heights[l];

            int tich = h * d;
            if(tich > max) max = tich;

            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return max;
    }
};
