class Solution {
public:
    int longestPalindrome(string s) {
        // initializing everything to zero 
        vector<int> freq(128,0);
        for (char ch : s){
            freq[ch]++;
        }
        int ans=0;
        bool oddcount=false;

        for (int i=0;i<128;i++){
            ans+=(freq[i]/2) *2;

            if (freq[i]%2==1){
                oddcount=true;
            }

        }
        if (oddcount){
            ans++;
        }
        return ans;

    }
};