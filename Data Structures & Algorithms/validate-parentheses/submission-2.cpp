class Solution {
public:
    bool isValid(string s) {
		stack<char> c;
		char tmp_c;
		for (int i = 0; s[i]; i++)
		{
			if (s[i] == '{' || s[i] == '(' || s[i] == '[')
				c.push(s[i]);
			else {
				if (c.size())
					tmp_c = c.top();
				else
				 	return (false);
				if ((s[i] == '}' && tmp_c == '{') || (tmp_c == '(' && s[i] == ')') || (tmp_c == '[' && s[i] == ']'))
				{
					c.pop();
				}
				else {
					return (false);
				}
			}
		}
		if (c.size())
			return (false);
		return (true);
    }
};
