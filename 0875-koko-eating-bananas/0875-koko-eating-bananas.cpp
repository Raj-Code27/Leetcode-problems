class Solution {
public:
    int max_element(vector<int> &piles){
        int maxi=INT_MIN;
        for (int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }

    long long calculatehours(vector<int> &piles,int hours){
        long long totalhours=0;
        for (int i=0;i<piles.size();i++){
            totalhours+=ceil ((double) piles[i]/(double)hours);
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=max_element(piles);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalh=calculatehours(piles,mid);
            if (totalh <= h){
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