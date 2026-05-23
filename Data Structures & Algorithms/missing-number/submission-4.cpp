class Solution {
	public:
		int missingNumber(vector<int>& nums) {
			int xorg_v = 0;
			int xorg_i = 0;
			int big_elem = 0;
            int small_elem = nums[0];
			for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
			{
				xorg_v = xorg_v ^ *it;
				if (*it > big_elem)
					big_elem = *it;
                if (*it < small_elem)
                    small_elem = *it;
			}
			for (int i = 1; i <= big_elem; i++)
			{
				xorg_i = xorg_i ^ i;
			}
			int res = (xorg_v ^ xorg_i);
            if (res == 0 && small_elem == 0)
                return (big_elem + 1);
            return (res);
		}
};
