class Solution {
public:
    int findfirstposition(vector<int> &nums ,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

    int findlastposition(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f1=findfirstposition(nums,target);

        if (f1==-1){
            return {-1,-1};
        }
        int f2=findlastposition(nums,target);
        return {f1,f2};
    }
};