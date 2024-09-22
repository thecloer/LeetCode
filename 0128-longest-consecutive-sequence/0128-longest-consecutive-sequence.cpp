class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 1;
        for(int x:nums) {
            if(s.find(x-1) != s.end()) continue;

            int len = 1;
            while(s.find(++x) != s.end()) len++;

            if(len > ans) ans = len;
        }
        return ans;
    }
};