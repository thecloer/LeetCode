class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool used[256] = {};
        int ans = 0;
        for(int left=0, right=0, n=s.length(); right<n; ans=max(ans,++right-left)){
            int x = s[right];
            if(used[x]){
                while(left < right && s[left] != x){
                    used[s[left++]] = false;
                }
                if(left < right) left++;
            } else used[x] = true;
        }
        return ans;
    }
};