struct entry { int key, value; };
bool cmp(const entry &a, const entry &b) { return a.value < b.value; }

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for(int n:nums) freq[n]++;

        priority_queue<entry, vector<entry>, decltype(&cmp)> pq(cmp);
        for(const auto &[key, value]:freq)
            pq.push({ key, value });

        vector<int> ans(k);
        for(int i=0; i<k; i++) {
            ans[i] = pq.top().key;
            pq.pop();
        }

        return ans;
    }
};