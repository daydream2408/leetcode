class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
       // int n = height.length();
    int  area = 0;
       int n=height.size();
        int j = n-1;

        while (i<j) {
            area = max(area, (min(height[i], height[j]) * (abs(i - j))));

            if (height[j] > height[i]) {
                i++;

            } else {
                j--;
            }
        }
        return area;
    }
};