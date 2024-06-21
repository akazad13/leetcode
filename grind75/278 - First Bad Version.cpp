// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 0;
        long right = n-1;
        int bad=1;

        while(left<=right) {
            int version = (left+right)/2;
            if(isBadVersion(version+1)) {
                right = version -1;
                bad = version+1;
            } else {
                left = version +1;
            }
        }
        return bad;
    }
};

