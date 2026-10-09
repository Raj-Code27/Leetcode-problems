class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;

            if (mid <nums.size()-1 && nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else if (mid >0 && nums[mid]<nums[mid-1]){
                right=mid-1;
            }
            else{
                ans=mid;
                break;
            }
        }
        return ans;
    }
};