// Majority Element
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        /*int candidate ,count=0 , n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                candidate = nums[i];
            }
            else{
                    if(candidate == nums[i])
                    count++;
                    else
                    count--;
                 }
        }
        return candidate;*/
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int count=1;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2)
        //     return nums[i];
        // }
        // return -1;
        unordered_map<int,int> map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto i:map){
            if(i.second>n/2)
            return i.first;
        }
        return -1;

    }
};