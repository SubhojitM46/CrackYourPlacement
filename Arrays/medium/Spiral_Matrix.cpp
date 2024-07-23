// Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size(),col=matrix[0].size();
        int top=0,bottom=row-1,left=0,right=col-1;
        while(left<=right && top<=bottom){
            //print top
            for(int j=left;j<=right;j++)
            ans.push_back(matrix[top][j]);
            top++;
            //print right
            for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);
            right--;
            //print bottom
            if(top<=bottom){
            for(int j=right;j>=left;j--)
            ans.push_back(matrix[bottom][j]);
           bottom--;
           }
           //print left
            if(left<=right){
           for(int i=bottom;i>=top;i--)
            ans.push_back(matrix[i][left]);
           left++;
            
            }


 
    }
    return ans;
    }
   
};