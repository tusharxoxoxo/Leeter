class Solution {
public:
    void recursion(int open, int close, string jj, vector<string> &vec){
        
        if(open == 0 && close == 0){
            vec.push_back(jj); 
            return;
        }
        
        if(open != 0){
            string jjj = jj;
            jjj.push_back('(');
            // vec.push_back(jjj);
            recursion(open - 1, close, jjj, vec);
        }
        
        if(close > open){
            string jjj = jj;
            jjj.push_back(')');
            // vec.push_back(jjj);
            recursion(open, close - 1, jjj, vec);
        }
        
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        
        int open = n;
        int close = n;
        string jj = "";
        recursion(open, close, jj, vec);
        
        return vec;
    }
};