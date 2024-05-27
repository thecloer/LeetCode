struct e { int n, f; };
bool cmp(const e& a, const e& b) { return a.f <  b.f; }

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq {};
        for(int i=0; i<nums.size(); i++) freq[nums[i]]++;

        priority_queue<e, vector<e>, decltype(&cmp)> Q(cmp);
        for(const auto [n, f] : freq) Q.push({n, f});

        vector<int> ans(k);
        for(int i=0; i<k; i++) {
            ans[i] = Q.top().n;
            Q.pop();
        }
        return ans;
    }
};
