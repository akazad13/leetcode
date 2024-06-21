class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;

        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] >= nums[i]) {
                result += nums[i-1] - nums[i] + 1;
                nums[i] = nums[i-1] + 1;
            }
        }
        return result;
    }
};

/*
    1, 1, 2, 2, 3, 7

    i = 1,  nums[1] = 1, nums[0] = 1
    result = 0 + 1-1+1 = 1
    nums[1] = 1+1 = 2

    i = 2,  nums[2] = 2, nums[1] = 2
    result = 1 + 2-2+1 = 2
    nums[2] = 2+1 = 3

    i = 3,  nums[3] = 2, nums[2] = 3
    result = 2 + 3-2+1 = 4
    nums[3] = 3+1 = 4

    i = 4,  nums[4] = 3, nums[3] = 4
    result = 4 + 4-3+1 = 6
    nums[4] = 4+1 = 5

    i = 5,  nums[5] = 7, nums[1] = 5
    result = 6
    nums[5] = 7

*/