class Solution {
public:
    
    
    bool isValid(string s) {
        stack<char> st;
        if(s[0] == '(' and s[1] == ']') return false;
        for(auto it : s){
            if(it == '(' || it == '[' || it == '{') st.push(it);
            else{
            // if(st.empty() or (st.top() == ')' and it != ')') or (st.top() == '}' and it != '}') or (st.top() == ']' and it != ']')) return false;
                if(st.empty() or (st.top()=='(' and it!=')') or (st.top()=='{' and it!='}') or (st.top()=='[' and it!=']')) return false;
                
                st.pop();
            }
            
        }
        return st.empty();
    }
};