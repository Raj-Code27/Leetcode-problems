class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        long long sum=0;
        for (int i=0;i<n;i++){
            sum+=nums[i];
            long long rem;
            if (k==0){
                rem=sum;
            }
            else{
                rem=sum % k;
            }
            // check if rem already exist or not 
            if (mpp.find(rem)!=mpp.end()){
                // if exist then check it's length 
                if (i-mpp[rem]>=2){
                    return true;
                }
            }
            else{
                mpp[rem]=i;
            }
        }
    return false;
    }
};