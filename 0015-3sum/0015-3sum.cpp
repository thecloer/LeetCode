class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0, end = nums.size() - 2; i < end; i++) {
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1, k = nums.size() - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++;
                else if (sum > 0) k--;
                else {
                    ans.push_back({ nums[i], nums[j], nums[k] });

                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) j++;
                }
            }
        }
        return ans;
    }
};