class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int initialSatisfaction = 0;
        int curWindowSatisfaction = 0;

        for(int i=0; i<customers.size();i++) {
            if(!grumpy[i]) {
                initialSatisfaction += customers[i];
            }
        }

        int left = 0;
        int right = minutes;

        for(int i=0;i<right;i++) {
            if(grumpy[i]) {
                curWindowSatisfaction += customers[i];
            }
        }

        int maxAdditionalSatisfaction = curWindowSatisfaction;
        while(right < customers.size()) {
            if(grumpy[right]) {
                curWindowSatisfaction += customers[right];
            }

            if(grumpy[left]) {
                curWindowSatisfaction -= customers[left];
            }
            maxAdditionalSatisfaction = max(maxAdditionalSatisfaction, curWindowSatisfaction);
            right++;
            left++;
        }

        return initialSatisfaction+maxAdditionalSatisfaction;
    }
};