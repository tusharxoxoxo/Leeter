class KthLargest {
public:
    
    multiset<int> st;
    // st.clear();
    int size=-1;
    
    KthLargest(int k, vector<int>& nums) 
    {
        for(int i=0; i<nums.size(); i++)
            st.insert(nums[i]);
        
        size=k;
    }
    
    int add(int val) 
    {
        st.insert(val);
        auto it = st.end();
        it--;
        
        for(int i=1; i<size; i++)
            it--;
        
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */