# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    ans = Array.new(2)
    n = nums.length
    dic = {}
    dic.default = 0
    for i in 0...n do
        if dic[target - nums[i]] != 0
            ans[0] = dic[target - nums[i]]
            ans[1] = i + 1
            break
        end
        dic[nums[i]] = i + 1
    end
    return ans
    
end
