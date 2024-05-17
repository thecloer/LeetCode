/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
const twoSum = function (nums, target) {
  const len = nums.length;
  for (let i = 0; i < len; i++) {
    const pair = nums.indexOf(target - nums.pop());
    if (pair !== -1) return [pair, len - 1 - i];
  }
  return [];
};