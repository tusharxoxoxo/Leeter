class Solution {
public:
    
    
    vector<int> find(int k,vector<int>& nums, vector<int> &luka, int target){
        if(k == 0)
            return luka;
        if(nums[k - 1] == target)
            luka.push_back(k - 1);
        return find(k - 1, nums, luka, target);
        
        
        return luka;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> luka;
        if(nums.size() == 0){
            luka.push_back(-1);
            luka.push_back(-1);
            return luka;
        }
        int k = nums.size();
        find(k, nums, luka, target);
        reverse(luka.begin(), luka.end());
        if(luka.size() == 0){
            luka.push_back(-1);
            luka.push_back(-1);
            
            return luka;
        }
        if(luka.size() == 1){
            luka.push_back(luka[0]);
            return luka;
        }
        
        sort(luka.begin(), luka.end());
        
        vector<int> ans;
        ans.push_back(luka[0]);
        ans.push_back(luka[luka.size()-1]);
        
        
        return ans;;
    }
};