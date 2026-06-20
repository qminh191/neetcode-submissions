class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 1, min = 1;
        for(int i : piles) if(i > max) max = i;
        
        int min_k = 1;
        while(min <= max) {
            int k = (min + max) / 2;
            int sum = 0;
            for(int i : piles) {
                if(i % k == 0) sum += i / k;
                else sum += (i / k) + 1; 
            }

            if(sum <= h) {
                min_k = k;
                max = k - 1;
            } else min = k + 1;
        }

        return min_k;
    }
};
