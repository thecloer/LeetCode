class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            if(nums[l] < nums[r]) return nums[l];
            int m = (l + r) / 2;
            if(nums[l] <= nums[m]) l = m + 1;
            else r = m;
        }
        return nums[r];
    }
};