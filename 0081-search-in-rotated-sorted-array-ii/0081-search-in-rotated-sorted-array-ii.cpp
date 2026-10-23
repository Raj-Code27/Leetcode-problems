class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            // if target is directly found
            if (nums[mid]==target){
                return true;
            }
            //if nums[low]==nums[mid]==nums[high]
            if (nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            // else check for which part is sorted 
            //left half 
            if (nums[low]<=nums[mid]){
                // check whether that target lies inside this half or not 
                if (nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            // right half 
            else{
                // check whether that target lies in right half of not 
                if (nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};