def findPathsMax(arr):
    dp = [[0 for x in range(len(arr[0])+1)] for x in range(len(arr)+1)]
    dp[0][0] = arr[0][0]
    for i in range(1, len(arr[0])):
        dp[0][i] = dp[0][i-1]+arr[0][i]
    for i in range(1, len(arr)):
        dp[i][0] = dp[i-1][0]+arr[i][0]
    for r in range(len(arr)):
        for c in range(len(arr[0])):
            dp[r][c] = max(dp[r-1][c], dp[r][c-1]) + arr[r][c]
    return dp[len(arr)-1][len(arr[0])-1]


for _ in range(int(input())):
    r, c = list(map(int, input().split()))
    arr = []
    for _ in range(r):
        arr.append(list(map(int, input().split())))
    print(findPathsMax(arr))
