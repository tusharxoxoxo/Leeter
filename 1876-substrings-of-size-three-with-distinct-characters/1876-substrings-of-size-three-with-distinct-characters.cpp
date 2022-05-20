class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0; int j = 0;
        int n = s.length();
        int counter = 0;
        int k = 3;
        while(j < n){
            if((j - i + 1) < k) j++;
            
            else if((j - i + 1) == k){
                
                if(s[i] != s[i+ 1] and s[i + 1] != s[i + 2] and s[i] != s[i + 2]) counter++;
                // cout << counter << endl;
                i++;
                j++;
            }
        }
        
        return counter;
    }
};