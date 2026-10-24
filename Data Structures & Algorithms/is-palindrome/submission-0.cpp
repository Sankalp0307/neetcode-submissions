class Solution {
   public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i <= j) 
        {
            if (!isalnum(s[i])) //!isalnum() skips spaces and punctuation.
            {
                i++;
            }
             else if (!isalnum(s[j])) 
            {
                j--;
            }
             else if (tolower(s[i]) != tolower(s[j])) //tolower() makes uppercase and lowercase letters comparable.
            {
                return false;
            } 
            else 
            {
                i++;
                j--;
            }
        }

        return 1;
    }
};
