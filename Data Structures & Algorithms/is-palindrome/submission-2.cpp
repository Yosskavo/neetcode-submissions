class Solution {
public:
    bool isPalindrome(string s) {
        string::iterator it = s.begin();
        string::iterator ij = s.end() - 1;
        while (it != ij && ij > it)
        {
            if (!isdigit(*it) && !isalpha(*it))
            {
                it++;
            }
            else if (!isdigit(*ij) && !isalpha(*ij))
            {
                ij--;
            }
            else if (tolower(*ij) != tolower(*it))
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
