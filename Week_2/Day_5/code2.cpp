class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }

        int maxLen = 1;
        string maxStr = s.substr(0, 1);

        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j <= s.length(); j++) {
                if ((j - i) > maxLen && isPalindrome(s.substr(i, j - i))) {
                    maxLen = j - i;
                    maxStr = s.substr(i, j - i);
                }
            }
        }

        return maxStr;
    }

private:
    bool isPalindrome(const string& str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
