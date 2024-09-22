class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 1;
        for(int x:s) {
            if(s.find(x-1) != s.end()) continue;
            int len = 1;
            while(s.find(++x) != s.end()) len++;
            
            if(len > ans) ans = len;
        }
        return ans;
    }
};
/*
        if(nums.size() == 0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 1;
        for(int x:nums) {
            if(st.find(x-1) != st.end()) continue;

            int len = 1;
            while(st.find(++x) != st.end()) len++;

            ans = max(ans, len);
        }
        return ans;
*/