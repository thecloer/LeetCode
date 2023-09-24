using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool used[256] = {};
        queue<int> q;
        int ans = 0;
        for(char c:s){
            if(used[c]) {
                while(!q.empty() && q.front() != c){
                    used[q.front()] = false;
                    q.pop();
                }
                if(!q.empty()) 
                    q.pop();
                q.push(c);
            } else {
                used[c] = true;
                q.push(c);
            }

            if(ans < q.size()) 
                ans = q.size();
        }
        return ans;
    }
};