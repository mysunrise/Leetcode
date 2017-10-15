class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int p1 = 0, p2 = size - 1;
        int current_water, min, max_water = 0;
        while(p1 < p2) {
            min = height[p1] < height[p2] ? height[p1] : height[p2];
            current_water = (p2 - p1) * min;
            if (current_water > max_water) max_water = current_water;
            if (height[p1] <= height[p2]) p1++;
            else p2--;
        }
        return max_water;
    }
};
