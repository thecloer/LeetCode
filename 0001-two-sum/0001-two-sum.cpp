class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> memo;
        for(int i = 0; i < nums.size(); i++) {
            if(memo.find(nums[i]) == memo.end()) 
                memo[target-nums[i]] = i;
            else return {memo[nums[i]], i};
        }
        return {};
    }
};