class Solution {
public:
    vector<int> countBits(int n) {
        // initialize a vector dp which will store values values starting from 0 
        vector<int> dp(n+1,0);
        for (int i=1;i<=n;i++){
            dp[i]=dp[i/2] + (i % 2);
        }
        return dp;
    }
};