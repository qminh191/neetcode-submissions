class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = 0;
        int y = matrix.size();
        int i = 0;
        while(matrix.size() > 1 && x < y && size_t(i) < matrix[0].size()) {
            int mid = (x + y) / 2;
            if(matrix[mid][i] == target) return true;
            else if(matrix[mid][i] < target) x = mid;
            else y = mid;

            i++;
            if(size_t(i) == matrix[0].size()) {
                if(matrix[mid][0] < target) mid++;
                else mid--;
                x = mid;
            }
        }
        if(size_t(x) == matrix.size()) return false;
        int l = 0, r = matrix[x].size();
        while(l < r) {
            int mid = (l + r) / 2;
            if(matrix[x][mid] == target) return true;
            else if(matrix[x][mid] > target) r = mid;
            else l = mid + 1;
        }

        return false;
    }
};
