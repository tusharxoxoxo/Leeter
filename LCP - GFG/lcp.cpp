// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // if(n == 1) return ar[0];
         
         sort(ar, ar + n);
         string kkk = ar[0];
        //  int j = 0;
         for(int i = 1; i < n; ++i){
             int j =0;
             for(j = 0; j < kkk.length(); ++j)
             {
                 if(kkk[j] != ar[i][j])break;
             }
             
                        for(int k = (kkk.length()-1); k >= j; --k)
                             kkk.pop_back();
             
         }
         if(kkk.empty()) return kkk += "-1";
         return kkk;
    }
        
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends