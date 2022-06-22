class Solution {
public:
    int countSpecialSubsequences(vector<int>& nums) {
        long mod = 1000000007;
        long a = 0; 
        long ab = 0;
        long abc = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                a = ((2 * a) + 1) % mod;
            } else if(nums[i] == 1){
                ab = ((2 * ab) + a) % mod; 
            } else if(nums[i] == 2){
                abc = ((2 * abc) + ab) % mod;
            }
        }
        
        return (int)abc;
    }
};