// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        // code here 
        if (x == y) return 0;
        
        int j = x;
        int k = y;
        int ans = 0;
        while (j != k){
            
            if(j > k) {
                j = j/2;
                ans++;
                
            }
            
            if(k > j){
                k = k/2;
                ans++;
               
            }
            
         
        
        }
        return ans; 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends