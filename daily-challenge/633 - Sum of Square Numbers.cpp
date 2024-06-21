class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long i = 0; i*i <= c ; i++) {
            long rem = c - i*i;
            long sqt = sqrt(rem);
            if(sqt*sqt == rem) {
                return true;
            }
        }
        return false;
    }
};