class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> freq {};
        for(char c:s) freq[c]++;
        for(char c:t) if(--freq[c] < 0) return false;
        for(auto [c, v]:freq) if(v > 0) return false;
        return true;
    }
};