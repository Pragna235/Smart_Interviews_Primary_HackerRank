from sys import stdin, stdout


def precompute(n):
    dp = [0] * (n + 1)
    dp[0] = 1

    for i in range(1, n + 1):
        res = 0
        for j in range(1, 7):
            if (i - j) >= 0:
                res += dp[i - j]
        dp[i] = res % int(1e9 + 7)
    return dp


dp = precompute(100000)
for _ in range(int(input())):
    n = int(stdin.readline())
    stdout.write(str(dp[n]) + '\n')
