class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int left = 1;
        int right = 1000000000;
        int ans = 0;

        sort(position.begin(), position.end());

        while(left <= right) {
            int mid = (left+right) >> 1;

            if(canDistribute(position, m, mid)) {
                ans = mid;
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return ans;
    }

    bool canDistribute(vector<int>& position, int m, int magneticForce) {
        int nextPosition = position[0] + magneticForce;
        int taken = 1;
        for(int i=1;i<position.size(); i++) {
            if(nextPosition <= position[i]) {
                taken++;
                nextPosition = position[i] + magneticForce;
            }
            if(taken == m) {
                return true;
            }
        }
        return false;
    }
};