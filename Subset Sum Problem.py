def findSubsetSum(arr, k):
    dp = [[False for i in range(k+1)] for i in range(len(arr)+1) ]
    for i in range(len(arr)+1):
        dp[i][0] = True
    for i in range(1, len(arr)+1):
        for j in range(1, k+1):
            if j< arr[i-1]:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]]
    # print(dp)
    return dp[len(arr)][k]


for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    print(*[ "YES" if findSubsetSum(arr, k) else "NO"])
