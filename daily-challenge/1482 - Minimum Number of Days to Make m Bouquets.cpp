class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)m*k > (long)bloomDay.size())
            return -1;
        int left = 1;
        int right = 1000000000;
        int res = -1;

        while(left <= right) {
            int mid = (left + right) / 2;

            cout<<mid<<endl;

            if(canMakeBouquets(bloomDay, m, k, mid)) {
                res = mid;
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }

    bool canMakeBouquets(vector<int>& bloomDay, int bouquets, int adjFlower, int minNumOfDays) {
        int total = 0;
        int adj = 0;

        for(int i=0;i<bloomDay.size(); i++) {
            if(bloomDay[i] > minNumOfDays) {
                adj = 0;
            } else {
                adj++;
                if(adj == adjFlower) {
                    total++;
                    adj = 0;
                }
            }
            if(total == bouquets) {
                return true;
            }
        }
        return false;
    }
};