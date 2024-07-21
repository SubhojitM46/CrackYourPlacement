// Maximum Points You Can Obtain from Cards
// There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

// Your score is the sum of the points of the cards you have taken.

// Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

 

// Example 1:

// Input: cardPoints = [1,2,3,4,5,6,1], k = 3
// Output: 12
// Explanation: After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
class Solution {
public:
    int maxScore(vector<int>& p, int k) {
        int ans = 0;

        int tsum = 0;
        for(int i = 0; i < p.size(); i++){
            tsum += p[i];
        }

        int i = 0,j = 0;
        int s = p.size() - k;
        if(s == 0) return tsum;
        int csum = 0;

        while(j < p.size()){
            csum += p[j];
            if(j-i+1 >= s){
                ans = max(ans,tsum - csum);
                csum -= p[i];
                i++;
            }
            j++;
        }
        return ans; 
    }
};