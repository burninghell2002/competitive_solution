/*
https://leetcode.com/problems/container-with-most-water/

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
*/


class Solution {
    public int maxArea(int[] height) {

        int i, j, max = 0;
        for (i = 0; i < height.length/2; i++) {
            for (j = height.length-1; j >=height.length/2; j--) {
                if (max < ((Math.min(height[i], height[j])) * (j - i))) {
                    max = ((Math.min(height[i], height[j])) * (j - i));
                }
            }
        }
        return max;

    }
}
