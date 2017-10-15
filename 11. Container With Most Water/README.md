Problem:
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai).
n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.

Reference:
https://leetcode.com/problems/container-with-most-water/description/

Solution:
The key idea is that the how much water the container can contain depends on the distance of the lines and the min line.
We can use two points to traversal the points, find the min line and the relevant point ++ or -- until the points meet.
The time complexity is O(n) and the space complexity is O(1).
