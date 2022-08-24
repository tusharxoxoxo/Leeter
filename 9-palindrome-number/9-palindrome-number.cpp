class Solution {
public:
    bool isPalindrome(int x) {
      int rev = 0;
        if(x < 0) return false;
        int y = x;
        while(y){
          if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
          
          rev = rev * 10 + y%10;
            y /= 10;
      }  
        if(x == rev) return true;
        else return false;
    }
};