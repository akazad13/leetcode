class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int cnt = 0;

        for(int num:nums) {
            if(cnt==0) {
                candidate = num;
            }
            if(candidate == num) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return candidate;
    }
};

// Moore's voting algorighm