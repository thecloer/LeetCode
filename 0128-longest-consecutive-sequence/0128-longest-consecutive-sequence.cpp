class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int ans = 0;
        for(int x:nums) {
            if(s.find(x-1) != s.end()) continue;

            int len = 1;
            while(s.find(++x) != s.end()) len++;

            ans = max(ans, len);
        }
        return ans;
    }
};
/*
        int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int> st(nums.begin(), nums.end());

        for(const int it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    ++x;
                    ++cnt;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
*/