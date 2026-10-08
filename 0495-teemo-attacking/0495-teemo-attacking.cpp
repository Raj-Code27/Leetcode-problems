class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int ans=0;

        for (int i=0;i<n-1;i++){
            int gap= timeSeries[i+1]-timeSeries[i];

            if (gap>=duration){
                ans+=duration;
            }
            else{
                ans+=gap;
            }

        }
        if (n>0){
            ans+=duration;
        }
        return ans;
    }
};