class KthLargest {
public:
    int size = 0;
    multiset <int> a;
    KthLargest(int k, vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); ++i){
            a.insert(nums[i]);
        }
        
        size = k;
      
    }
    
    int add(int val) {
        
        
    a.insert(val);
    auto it = a.end();    
    for(int i = 0; i < size; ++i)
            it--;
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */