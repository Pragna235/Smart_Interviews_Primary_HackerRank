def getMaxKnapsack(v, w, k, n):
    dp = [[0 for x in range(k + 1)] for x in range(n + 1)]
    # dp = [[0]*(k+1)]*(n+1)
    for i in range(1, n + 1):
        for j in range(k + 1):
            dp[i][j] = dp[i - 1][j]
            if (j >= w[i - 1]):
                dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j])
    # print(dp)
    return dp[n][k]


for _ in range(int(input())):
    k, n = list(map(int, input().split()))
    w = [0] * (n)
    v = [0] * (n)
    for i in range(n):
        w[i], v[i] = list(map(int, input().split()))
    print(getMaxKnapsack(v, w, k, n))
