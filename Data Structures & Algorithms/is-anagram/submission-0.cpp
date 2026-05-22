class Solution {
	public:
		bool isAnagram(string s, string t) {
			map<char, int> m;
			for (string::iterator it = s.begin(); it != s.end(); it++)
			{
				m[*it]++;
			}
			for (string::iterator it = t.begin(); it != t.end(); it++)
			{
				if (m.find(*it) == m.end())
				{
					return (false);
				}
				m[*it]--;
			}
			for (map<char, int>::iterator it = m.begin(); it != m.end(); it++)
			{
				if (it->second != 0)
					return (false);
			}
			return (true);
		}
};
