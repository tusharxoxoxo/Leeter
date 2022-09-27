class Solution {
public:
    double myPow(double x, int n) {
//         if(n == 0) return 1;
//         // if(n == -2147483648 && x == 1.00000) return (double)1;
//         if(n < 0) return myPow(1/x, abs(n));
//         if(n % 2 == 0) return myPow(x * x, n/2);
        
//         else 
//             return x * myPow(x * x, n /2);  
        
         if(n==0){
            return 1;
        }
        if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        
        }else{
            return x*myPow(x*x,n/2);
        }
        
    }
};