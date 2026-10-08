class Solution {
public:
    vector<int> prefix;
    int total;
    Solution(vector<int>& w) {
        total=0;
        for (int weight : w){
            total+=weight;
            prefix.push_back(total);
        }

    }
    
    int pickIndex() {
        int target=rand() % total+1;

        int low=0;
        int high=prefix.size()-1;
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;

            if (prefix[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */