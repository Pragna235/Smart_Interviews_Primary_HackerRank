def precompute(n):
    dp = [0] * (n + 1)
    dp[0] = 1
    dp[1] = 1
    dp[2] = 2
    dp[3] = 3
    dp[4] = 5

    for i in range(5, n + 1):
        dp[i] = (dp[i - 1] + dp[i - 5] * 8 + dp[i - 2]) % 1000000007
    return dp


dp = precompute(1000000)
for _ in range(int(input())):
    n = int(input())
    print(dp[n])
