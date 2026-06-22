class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0, min = 1;
        for(int i : piles) if(i > max) max = i;
        
        int min_k = max;
        while(min <= max) {
            int k = (min + max) / 2;
            int sum = 0;
            for(int i : piles) sum += (i + k - 1) / k;

            if(sum <= h) {
                min_k = k;
                max = k - 1;
            } else min = k + 1;
        }

        return min_k;
    }
};
