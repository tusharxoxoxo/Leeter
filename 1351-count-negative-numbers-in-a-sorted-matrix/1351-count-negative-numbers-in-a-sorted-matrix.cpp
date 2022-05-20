class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
    //     for (int i = 0; i < vect.size(); i++)
    // {
    //     for (int j = 0; j < vect[i].size(); j++)
    //     {
    //         cout << vect[i][j] << " ";
    //     }    
    //     cout << endl;
    // }
    //     int i = grid.size();
    //     int j = grid[i].size();
    // while(i != 0){
    //     auto ind = upper_bound(grid[i].begin(), grid[i].end(), 0);
    //     count = count + j - *(ind);
    //     i--;
    // }
//         for (const vector<int>& row: grid)
//             ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
//         return ans;
        
        
        for(const vector<int> & row: grid)
            count += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return count;
    }
};