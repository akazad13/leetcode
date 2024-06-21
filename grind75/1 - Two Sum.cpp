class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> res;
        for(int i = 0; i< nums.size(); i++) {
            int remaining = target - nums[i];
            if(seen[remaining]>0) {
                res.push_back(seen[remaining]-1);
                 res.push_back(i);
                break;
            }
            seen[nums[i]] = i+1;
        }
        return res;
    }
};