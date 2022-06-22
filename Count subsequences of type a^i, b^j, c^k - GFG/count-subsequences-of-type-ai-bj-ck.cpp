// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        long mod = 1000000007;
        long a = 0;
        long ab = 0;
        long abc = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a'){
                a = (2 * a + 1)%mod;
            } else if(s[i] == 'b'){
                ab = (2 * ab + a)%mod;
            } else if(s[i] == 'c'){
                abc = (2 * abc + ab)%mod;
            }
        }
        
        return (int)abc;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends