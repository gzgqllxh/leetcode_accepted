/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var i
    var dic = {}
    var ans = new Array(2)
    for(i = 0; i < nums.length; i++) {
        if(dic[target - nums[i]] != undefined){
            ans[0] = dic[target - nums[i]]
            ans[1] = i + 1
            break
        }
        dic[nums[i]] = i + 1
    }
    return ans
};
