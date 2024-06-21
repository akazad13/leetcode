class Solution {
public:
    int longestPalindrome(string s) {
        int freq[52] = {0};

        for(int i=0; i<s.size(); i++) {
            if(s[i] >= 'a' && s[i] <='z') {
                freq[s[i]-'a']++;
            } else {
                freq[s[i]-'A'+26]++;
            }
        }

        int result = 0;
        for(int i=0; i<52;i++) {
            result+= (freq[i]/2)*2;
        }

        if(result < s.size())
            result++;

        return result;
    }
};