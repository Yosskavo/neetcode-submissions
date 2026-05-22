class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // if (nums.size() == 0)
        //     return (false);
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		{
			for (vector<int>::iterator jt = it + 1; jt != nums.end(); jt++)
			{
				if (*it == *jt)
					return (true);
			}
		}
		return (false);
    }
};
