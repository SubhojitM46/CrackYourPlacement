// Set Matrix Zeroes
/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:
Constraints:
m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1*/
class Solution {
public:
    int col0 = 1;
    void setZeroes(vector<vector<int>>& matrix) {
 int n = matrix.size();
int m = matrix[0].size();
vector<int> row(n,0);
vector<int> col(m,0);
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0) {
                row[i]=1;
                col[j]=1;

                 }
        }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i]==1){
            matrix[i][j]=0;
        }
        else if(col[j]==1){
            matrix[i][j]=0;
        }
    }
  }
    }
};