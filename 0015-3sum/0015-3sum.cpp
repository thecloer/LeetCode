class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int end = nums.size() - 2;
        int i = 0;
        while(i < end) {
            int target = -nums[i];
            int j = i + 1, k = nums.size() - 1;
            while(j < k) {
                int sum = nums[j] + nums[k];
                if(sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    ans.push_back({ nums[i], nums[j], nums[k] });

                    int l = j, r = k;
                    while(l < r && nums[j] == nums[++l]);
                    while(l < r && nums[k] == nums[--r]);
                    j = l;
                    k = r;
                }
            }

            int t = i;
            while(t < end && nums[i] == nums[++t]);
            i = t;
        }
        return ans;
    }
};