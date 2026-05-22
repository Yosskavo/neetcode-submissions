class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> i;

		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		{
			for (vector<int>::iterator jt = it + 1; jt != nums.end(); jt++)
			{
				if (*jt + *it == target)
				{
					i.push_back(it - nums.begin());
					i.push_back(jt - nums.begin());
					return (i);
				}
			}
		}
		return (i);
    }
};