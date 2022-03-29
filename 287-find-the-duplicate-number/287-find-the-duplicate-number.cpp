class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      set <int> car;
      int j = 0;  
        for(auto it = nums.begin(); it != nums.end(); ++it){
            auto pos = car.find(*it);
            if(pos == car.end())
            car.insert(*it);
            else {
                j = *it;
            }
        }

    return j;
    }

};