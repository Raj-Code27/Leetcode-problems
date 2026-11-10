class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int x : nums){
            st.insert(x);
        }
        int ans=0;
        for (int x: st){
            if (st.find(x-1)==st.end()){
                int count=1;
                int num=x;

                while(st.find(num+1)!=st.end()){
                    count++;
                    num++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};