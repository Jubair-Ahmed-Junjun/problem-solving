/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let numsLength = nums.length;
  for (let i = 0; i < numsLength; i++) {
    for (let j = 0; j < numsLength; j++) {
      if (nums[i] + nums[j] == target && i !== j) {
        return [i, j];
      }
    }
  }
};
