//Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:
// Input: nums = [0]
// Output: [0]
 // Constraints:
// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
class Solution {
public:
    void moveZeroes(vector<int>& a) {
            //first approach
    //     int n=a.size();
    //     vector<int> temp;
    //  for (int i = 0; i < n; i++) {
    //     if (a[i] != 0)
    //         temp.push_back(a[i]);
    //     }
    //     int nz = temp.size();

    //    for (int i = 0; i < nz; i++) {
    //       a[i] = temp[i];
    //     }

    // for (int i = nz; i < n; i++) {
    //     a[i] = 0;
    // }
         //second approach two pointer
    int i=0,j=a.size()-1;
    while(i<=j)
    {
        if(a[i]==0){
            swap(a[i],a[j]);
            i++,j--;
        }
       i++;
    }
    }
};