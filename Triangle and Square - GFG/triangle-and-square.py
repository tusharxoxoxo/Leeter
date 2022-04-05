#User function Template for python3

class Solution:
    def countShare(self,B):
        n=int(B/2)-1
        a=n*(n+1)/2
        return int(a)
        #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        b=int(input().strip())
        obj=Solution()
        print(obj.countShare(b))
        
# } Driver Code Ends