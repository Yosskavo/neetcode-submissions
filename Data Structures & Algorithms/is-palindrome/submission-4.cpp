class Solution {
public:
    bool isPalindrome(string s) {
        size_t it = 0;
        size_t ij = s.length() - 1;
        while (it != ij && ij > it)
        {
            if (!isdigit(s[it]) && !isalpha(s[it]))
            {
                it++;
            }
            else if (!isdigit(s[ij]) && !isalpha(s[ij]))
            {
                ij--;
            }
            else if (tolower(s[it]) != tolower(s[ij]))
            {
                return (false);
            }
            else
            {
                it++;
                ij--;
            }

        }
        return (true);
    }
};
