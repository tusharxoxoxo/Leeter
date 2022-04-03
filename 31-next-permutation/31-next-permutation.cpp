class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         int k = 0;
//         int n = nums.size();
        
//         // while(n--){
//         //     if(nums[n] > nums[n -1] ) {k = 778; break;}
//         // }
//         for (int i = nums.size()-1; i > 0; --i)
//         {
//             if (nums[i] > nums[i-1]) {k = 788; break;}
//         }
        
//       if(k == 788) 
//       reverse(nums.begin(), nums.end());
//         else
//             next_permutation(nums.begin(), nums.end());
        next_permutation(begin(nums), end(nums));
    }
};