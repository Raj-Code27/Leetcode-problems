class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n);
        prefixsum[0]=nums[0];
        for (int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        // now prefix sum is stored now traverse in prefixsum and check it 
        int m=prefixsum.size();
        for (int i=0;i<m;i++){
            int leftsum;
            if (i==0){
                leftsum=0;
            }
            else{
                leftsum=prefixsum[i-1];
            }
            int rightsum;
            rightsum=prefixsum[m-1]-prefixsum[i];

            if (leftsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};