class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()) {
            swap(a,b);
        }

        string res;
        int carry = 0;
        int j = a.size()-1;

        for(int i = b.size()-1; i>=0; i--) {
            int num1 = a[j]-'0';
            int num2 = b[i]-'0';

            int sum = carry + num1 + num2;
            res.push_back(sum%2 + '0');
            carry = sum/2;
            j--;
        }

        while(j>=0) {
            int num1 = a[j]-'0';
            int sum = carry + num1;
            res.push_back(sum%2 + '0');
            carry = sum/2;
            j--;
        }

        if(carry) {
            res.push_back(carry + '0');
        }

        reverse(res.begin(), res.end());

        return res;
    }
};