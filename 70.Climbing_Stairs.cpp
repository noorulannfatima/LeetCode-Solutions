/* Memoization
number of way's to reach step 3 = number of ways to reach step 2 + number of ways to reach step 1
step[n] = step [n-1] + step[n-2]
*/
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        
        for (int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
//Time Complexity : O(n), Space Complexity : O(n)

/*Another Methode
class Solution {
public:
    int climbStairs(int n) {
        int prev_2 = 0, prev_1 = 1, tmp;
        for(int i = 0; i < n; i++) {
            tmp = prev_1;
            prev_1 = prev_1 + prev_2;
            prev_2 = tmp;
        }
        return prev_1;
    }
};
*/
