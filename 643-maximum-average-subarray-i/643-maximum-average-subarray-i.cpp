class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int mx = INT_MIN;
        while(j < n){
            sum = sum + nums[j];
            
            if((j - i + 1)< k) j++;
            
            else if((j - i + 1) == k){
                mx = max(mx, sum);
                sum = sum - nums[i];
                i++;
                j++;
            }
        }
        
        
        return (double)mx/k;
    }
};