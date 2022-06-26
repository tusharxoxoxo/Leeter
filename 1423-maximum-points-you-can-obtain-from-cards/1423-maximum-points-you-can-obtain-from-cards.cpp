class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int allRight = 0;
        int n = cardPoints.size();
        for(int i = n - k; i < n; ++i){
            allRight += cardPoints[i];
        }
        int j = allRight;
        for(int i = 0; i < k; ++i){
            j -= cardPoints[n - k + i];
            j += cardPoints[i];
            allRight = max(allRight, j);
        }
        
        return allRight;
    }
};