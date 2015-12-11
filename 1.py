class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = {}
        n = len(nums)
        for i in xrange(0, n):
            temp = target - nums[i]
            if dic.has_key(temp):
                a = dic[temp]
                b = i + 1
                break
            dic[nums[i]] = i + 1
        
        return a,b
