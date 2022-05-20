class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
   
        
        
        for(const vector<int> & row: grid)
            count += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return count;
    }
};