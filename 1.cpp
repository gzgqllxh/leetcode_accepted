class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> dic;
        dic.clear();
        int i, n = nums.size(), temp;
        for(i = 0; i < n; i++){
            temp = dic[target - nums[i]];
            if(temp){
                ans.push_back(temp);
                ans.push_back(i + 1);
                break;
            }
            dic[nums[i]] = i + 1;
        }
        return ans;
    }
};
