class Solution {
public:
    bool isPalindrome(string s) {
         int left = 0;
         int right = s.size()-1;

         while(left < right) {
            while(left < right && !(tolower(s[left]) >= 'a' && tolower(s[left]) <= 'z') && !(tolower(s[left]) >= '0' && tolower(s[left]) <= '9')) {
                left++;
            }
            while(left < right && !(tolower(s[right]) >= 'a' && tolower(s[right]) <= 'z') && !(tolower(s[right]) >= '0' && tolower(s[right]) <= '9')) {
                right--;
            }
            if(left < right) {
                if(tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
         }
         return true;
    }
};

/*
C#
public class Solution {
    public bool IsPalindrome(string s) {
        int left = 0;
         int right = s.Length-1;

         while(left < right) {
            while(left < right && !Char.IsLetterOrDigit(s[left])) {
                left++;
            }
            while(left < right && !Char.IsLetterOrDigit(s[right])) {
                right--;
            }
            if(left < right) {
                if(char.ToLower(s[left]) != char.ToLower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
         }
         return true;
    }
}
*/ 