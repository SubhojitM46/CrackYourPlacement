// Container With Most Water
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(); 

        int start = 0; 
        int end = n - 1;

        int area = 0; 
        int result = 0; 
        
        while (start < end) {
            int breadth = end - start; // Calculate the distance (breadth) between the two pointers
            area = breadth * min(height[start], height[end]); // Calculate the area between the two lines
            result = max(area, result);

            // Move the pointer pointing to the shorter line towards the center
            if (height[start] <= height[end]) {
                start++;
            } else {
                end--;
            }
        } 

        return result; 
    }
};