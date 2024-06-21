class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long missing = 1;
        int patch = 0;
        int idx = 0;

        while(missing<=n) {
            if(idx < nums.size() && missing >= nums[idx]) {
                missing += nums[idx++];
            } else {
                missing += missing;
                patch++;
            }
        }
        return patch;
    }
};