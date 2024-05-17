class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> groups {};
        for(const string &str:strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        }
        vector<vector<string>> ans;
        for(const auto &[_, group]:groups) ans.push_back(group);
        return ans;
    }
};