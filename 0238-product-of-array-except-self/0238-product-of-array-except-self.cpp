class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // logic : for every index multiply it with their prefix and suffix
        int n=nums.size();
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        vector<int>ans(n);
        // for prefix 
        for (int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        // for suffix
        for (int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        // finding ans 
        for (int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};