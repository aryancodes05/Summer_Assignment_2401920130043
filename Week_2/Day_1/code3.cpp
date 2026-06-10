class Solution {
public:
    bool isAnagram(string s1, string s2) {
        
        if(s1.length() != s2.length()) {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        int n = s1.length();

        for(int i = 0; i < n; i++) {
            if(s1[i] != s2[i]) {
                return false;
            }
        }

        return true;
    }
};
