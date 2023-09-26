class Solution {
public:
    string removeDuplicateLetters(string s) {
        int count[26] = {};
        for(char c:s) count[c-'a']++;

        string ans = "";
        for(char c:s) {
            count[c-'a']--;
            if(ans.find(c) != -1) continue;
            
            while(!ans.empty() && count[ans.back()-'a'] && ans.back() >= c){
                ans.pop_back();
            }
            ans.push_back(c);
        }
        return ans;
    }
};