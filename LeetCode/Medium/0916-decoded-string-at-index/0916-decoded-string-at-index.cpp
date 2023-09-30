class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;
        for(char c:s) {
            if(c > '0' && c <= '9') len *= c - '0';
            else len++;
        }

        string ans = "";
        for(int i=s.length()-1; i>=0; i--) {
            if(isdigit(s[i])) {
                len /= s[i] - '0';
                k %= len;
            } else if(k == 0 || k == len){
                    ans += s[i];
                    break;
            } else {
                len--;
            }
        }

        return ans;
    }
};