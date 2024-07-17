// Sort Colors
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
 class Solution {
public:
    void sortColors(vector<int>& nums) {
        //first aproach
       // sort(nums.begin(),nums.end());
         int zero=0,one=0;
        for(int num : nums){
            if(num==0){
                zero++;
            }
            else if(num==1){
                one++;
            }
        }
        for(int i=0;i<zero;i++){
            nums[i]=0;
        }
        for(int i=zero;i<zero+one;i++){
            nums[i]=1;
        }
        for(int i=zero+one;i<nums.size();i++){
            nums[i]=2;
        }
    }
};