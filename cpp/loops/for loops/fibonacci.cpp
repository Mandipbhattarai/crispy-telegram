/*
    Time complexity: O(N)
    Space complexity: O(N)

    Where 'N' reprents the "Nth" number .
*/

int fibonacciNumber(int n) {

    const int mod = 1e9 + 7;

    // Create an array to store solution.
    int dp[n + 1];

    dp[0] = 0;
    dp[1] = 1;

    // Iterate i from 2 to N and find ith Fibonacci Number.
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }

    // Return the Nth Fibonacci Number
    return dp[n];
}