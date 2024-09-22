inline bool setContains(unordered_set<int> &s, int x) {return s.find(x) != s.end();}

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;
        for(int x:s) {
            if(setContains(s, x-1)) continue;
            int len = 1;
            while(setContains(s, ++x)) len++;
            if(len > ans) ans = len;
        }
        return ans;
    }
};