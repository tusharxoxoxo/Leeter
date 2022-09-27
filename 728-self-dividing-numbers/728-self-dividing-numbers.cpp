class Solution {
public:
    
      bool check(int j){
//         vector<int> jj;
//         int p = j;
//         while(p){
//             int x = p%10;
//             if(x == 0)
//                 return false;
//             jj.push_back(x);    
//         }
        
//         for(int i = 0; i < jj.size(); ++i ){
//             if(j % jj[i] != 0)
//                 return false;
//         }
//         return true;
        int p = j;
        while(p){
            int x = p % 10;
            if(x == 0) return false;
            if(j % x != 0) return false;
            p = p / 10;
        }
        
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        
        int j = left;
        while(j <= right){
            if(check(j))
                answer.push_back(j);
            j++;
        }
        
        return answer;
    }
};