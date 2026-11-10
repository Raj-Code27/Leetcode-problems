class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for (string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mpp[key].push_back(s);
        }
        // now storing that hashed data into ans 
        vector<vector<string>> ans;
        for (auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};