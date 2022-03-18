// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int countSubstr (string S)
	{
	    /*
	    int n = S.size();
	    int count = 0;
	    for(int i=0; i<n; ++i){
	        if(S[i] == '1'){
	            for(int j = i+1; j < n; ++j){
	                if(S[j] == '1') count++;
	            }
	        }
	    }
	    return count;
	    */
	    
	    
	    int n = S.size();
	    int count = 0;
	    for(int i=0; i<n; ++i){
	        if(S[i] == '1') count++;
	    }
	    
	    count = (count)*(count-1)/2;
	    return count;
	}
	
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        
        cout << ob.countSubstr (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends