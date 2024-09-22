class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;
        for(int x:nums) {
            if(s.find(x-1) != s.end()) continue;

            int len = 1;
            while(s.find(++x) != s.end()) len++;

            if(len > ans) ans = len;
        }
        return ans;
    }
};
