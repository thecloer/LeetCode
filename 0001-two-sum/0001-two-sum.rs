use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut dict = HashMap::new();
        for (index, num) in nums.iter().enumerate() {
            if let Some(&val) = dict.get(num) {
                return vec![val, index as i32];
            }
            dict.insert(target - num, index as i32);
        }
        Vec::new()
    }
}