class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n);
        prefixsum[0]=nums[0];
        for (int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        //starting from 1st index of prefixsum and for every index calculate leftsum and right sum and then comapiring 
        for (int i=0;i<n;i++){
            int leftsum;
            if (i==0){
                leftsum=0;
            }
            else{
                leftsum=prefixsum[i-1];
            }
            int rightsum=prefixsum[n-1]-prefixsum[i];
            if (leftsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};