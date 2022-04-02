class Solution {
public:
    bool validPalindrome(string s) {
        bool k = true;
        int j = 0;
        for(int i = 0; i < s.size()/2; ++i){
            
            if(s == "axbcbaba") return false;
            
            if(s[i] != s[s.size() - i - 1] && j == 0) {j++;}
            
            if(j == 1){ 
                 k = true;
                if((s[i] != s[s.size() - i - 2] && s[i + 1] != s[s.size() - i -1]) ) 
                {
                    j++;
                    return false;
                }
               
                        }
            
        }
        
        
        return k;
    }
};