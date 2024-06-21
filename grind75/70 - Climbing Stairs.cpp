class Solution {
public:
    int climbStairs(int n) {
        if(n==1) 
            return 1;
        
        int num1 = 1;
        int num2 = 1;

        for(int i = 1; i<n; i++) {
            int temp = num2;
            num2 = num1+num2;
            num1 = temp;
        }
        return num2;
    }
};

/*
int result = climbStrairs(i+1) + climbStrairs(i+2);
4
1+1+1+1
1+1+2
1+2+1
2+1+1
2+2

*/