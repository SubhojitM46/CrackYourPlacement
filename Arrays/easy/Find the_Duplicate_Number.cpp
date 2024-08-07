// Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 3
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //  int n=nums.size();
    //     vector<int> temp(n,0);
    //     for(auto i:nums) {
    //         if(temp[i]!=0) {
    //             return i;
    //         }
    //         else {
    //             temp[i]++;
    //         }
    //     }
    //     return -1;
    unordered_map<int,int> map;
    for(int i=0;i<nums.size();i++){
        if(map[nums[i]]==1)
        return nums[i];

        map[nums[i]]++;
    }
    return -1;
    }
};
 