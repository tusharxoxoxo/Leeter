class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
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
        
        
        
        return answer;
        
        
        /*vector<int> answer;
        unordered_map<int, int> shark;
        
        for(i = 0; i < nums.size(); ++i ){
            if(target - nums[i] != shark.end()){
                answer.pushback(shark[target - nums[i]]);
                answer.pushback(i);
            }
            shark[nums[i]] = i;
        }
        return answer;*/
    }
};


