class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0;
        int res = 0;
        for (int i : nums) {
            if (maj == 0) {
                res = i;
            }
            {
            if (res == i) {
                maj += 1;
            }

            else
               maj+= -1;
            }
        }
        return res;
    }
};