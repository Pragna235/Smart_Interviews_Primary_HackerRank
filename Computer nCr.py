from sys import stdin, stdout
def nCr(n, r):
    dp = [[0 for x in range(r + 1)] for x in range(n + 1)]
    for i in range(n+1):
        for j in range(min(i, r) + 1):
            if j == 0 or j == i:
                dp[i][j] = 1
            else:
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j]% 1000000007
    # print(dp)
    return dp

sol = nCr(2000, 2000)
for _ in range(int(input())):
    n, r = list(map(int, stdin.readline().split()))
    stdout.write(str(sol[n][r]% 1000000007)+'\n')
