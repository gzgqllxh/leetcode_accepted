/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define MOD 100031

int hash[100031];

int is_hash(int key){
    key = ((key % MOD) + MOD) % MOD;
    return hash[key];
}

void get(int key, int val){
    key = ((key % MOD) + MOD) % MOD;
    hash[key] = val;
}
 
int* twoSum(int* nums, int numsSize, int target) {
    memset(hash, -1, sizeof(hash));
    int *ans = (int*)malloc(2*sizeof(int)), i, temp;
    for(i = 0; i < numsSize; i++){
        temp = is_hash(target - nums[i]);
        if(temp!=-1){
            ans[0] = temp + 1;
            ans[1] = i + 1;
            break;
        }
        get(nums[i], i);
    }
    return ans;
}
