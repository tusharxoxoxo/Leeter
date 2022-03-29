class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    /*int n = nums.size();
        vector<int>answer;
        int i,j;i = 0; j = 0;
        for(int i = 0; i<n-1; ++i){
        for(int j = i+1; j<n; ++j){ 
            if((nums[i] + nums[j]) == target) { 
                answer.push_back(i);
                answer.push_back(j);
            //return answer;
                break;
            }
            }
        }
        
        
        
        return answer;*/
        
        
       /* vector<int> answer;
        unordered_map<int, int> shark;
        
        for(int i = 0; i < nums.size(); ++i ){
            auto it = (target - nums[i]);
            if(shark.find(it) != shark.end()){
                answer.pushback(shark[target - nums[i]]);
                answer.pushback(i);
            }
            shark[nums[i]] = i;
        }
        return answer;
        
        
 */ 
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i<n; ++i){
        int a = target - nums[i];
        auto it = find(nums.begin(), nums.end(),a);    
        if(it != nums.end() && it - nums.begin() != i){ 
            ans.push_back(i);
            ans.push_back(it - nums.begin());
            return ans;
        }
        }
        return ans;
    }
};


