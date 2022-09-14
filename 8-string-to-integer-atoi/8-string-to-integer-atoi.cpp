class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long answer = 0;
        
        if(s.size() == 0) return 0;
        
        while(i < s.size() && s[i] == ' ') i++;
        
        s = s.substr(i);
        
        int sign = +1;
        
        if(s[0] == '-') sign = -1;
        
        int MAX = INT_MAX, MIN = INT_MIN;
        // cout << i << endl;
        i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
        // cout << i ;
        while(i < s.length()){
            if(s[i] == ' ' || !isdigit(s[i])) break;
            
            answer = answer * 10 + (s[i] - '0');
            // cout << "svisf";
            if(sign == -1 && -1 * answer < MIN) return MIN;
            if(sign == 1 && answer > MAX) return MAX;
            
            i++;
        }
        
        return (int)(sign * answer);
    }
};