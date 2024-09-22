class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
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