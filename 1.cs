public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> dic = new Dictionary<int, int> ();
        int[] ans = new int[2];
        for (int i = 0; i < nums.Length; i++) {
            if (dic.ContainsKey(target - nums[i])) {
                ans[0] = dic[target - nums[i]];
                ans[1] = i + 1;
                break;
            }
            dic[nums[i]] = i + 1;
        }
        return ans;
    }
}
