class Solution {
public:
    bool isPalindrome(string s) {
    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= 65 && s[i] <= 92) s[i] += 32;}
        
        // cout<<s<<endl;
        
        string b = "";
        
        for(int i = 0; i < s.length(); ++i)
        {
            
            if((s[i] >= 97 && s[i] <= 122) || ( s[i] >= 48 && s[i] <= 57 )) 
            {
                b += s[i];
            }
        }
        
        int bb = b.size() - 1;
        
        // cout<<b<<endl;
        
        for(int i = 0; i <= bb; ++i)
        {
            if(b[i] != b[bb]) 
                return false;
            bb--;
            }
        
        return true;
    }
};