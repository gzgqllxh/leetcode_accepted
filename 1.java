public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = new int[2];
        HashMap<Integer, Integer> HashII = new HashMap<Integer, Integer>();
        int i;
        for (i = 0; i < nums.length; i++) {
            if (null != HashII.get(target - nums[i])) {
                int tempid = HashII.get(target - nums[i]);
                ans[0] = tempid;
                ans[1] = i + 1;
                break;
            }
            HashII.put(nums[i], i + 1);
        }
        return ans;
    }
}
