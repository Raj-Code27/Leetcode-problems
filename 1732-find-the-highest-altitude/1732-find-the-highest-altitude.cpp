class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int alt=0;
        int maxheight=0;
        for (int i=0;i<n;i++){
            alt+=gain[i];
            maxheight=max(alt,maxheight);
        }
        return maxheight;
    }
};