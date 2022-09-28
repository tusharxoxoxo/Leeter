class Solution {
public:
    int countPrimes(int n) {
        int counter = 0;
        vector<bool> isPrime(n + 1, 1);
        isPrime[1] = false;
        
        for(int i = 2; i < n; ++i){
            if(isPrime[i]){
                counter++;
                // cout << i << endl;
                for(int j = i * 2; j <= n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        
        return counter;
    }
};