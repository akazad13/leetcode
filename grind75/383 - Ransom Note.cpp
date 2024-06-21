class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size()) return false;
        
        int mMap[26] = {0};
        
        for(char s:magazine)
        {
            mMap[s-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mMap[ransomNote[i]-'a'] == 0)
                return false;
            mMap[ransomNote[i]-'a']--;
        }
        return true;
    }
};