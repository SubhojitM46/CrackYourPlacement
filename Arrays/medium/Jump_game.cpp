// Jump Game
// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if(nums[0]==0 && nums.size()==1)
        // return true;

        // if(nums[0]==1 && nums.size()==1)
        // return true;
        

        // for(int i=0;i<nums.size()-1;i++){
        //     int jump=nums[i];
        //   while(jump){
        //     int j=i;
        //       j++;
            
        //     if(j==nums.size()-1 && jump==1)
        //     return true;
          
        //     jump--;
        //   }
        // }
        // return false;
        int n=nums.size();
        int reachable=0;
        for(int i=0;i<n;i++){
            if(reachable<i)
                return false;
            reachable=max(reachable,i+nums[i]);
        }
        return true;
    }
};

