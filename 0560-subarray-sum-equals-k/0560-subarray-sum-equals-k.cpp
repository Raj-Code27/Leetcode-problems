class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int currsum=0;
        int count=0;
        for ( int x : nums){
            currsum+=x;
            int reqsum=currsum-k;
            if (mpp.find(reqsum)!=mpp.end()){
                count+=mpp[reqsum];
            }
            mpp[currsum]++;
        }
        return count;
    }
};