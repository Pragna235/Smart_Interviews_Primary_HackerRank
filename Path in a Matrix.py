def getWays(arr):
    if(arr[0][0] == 0):
        return 0
    c = 1
    dp = [[0 for x in range(len(arr[0]))] for x in range(len(arr))]
    dp[0][0] = 1
    for i in range(1, len(arr[0])):
        if (arr[0][i] == 0):
            break
        dp[0][i] = 1
    for i in range(1, len(arr)):
        if (arr[i][0] == 0):
            break
        dp[i][0] = 1
    for r in range(1, len(arr)):
        for c in range(1, len(arr[0])):
            if(arr[r][c] != 0):
                dp[r][c] = (dp[r-1][c-1]+dp[r-1][c]+dp[r][c-1])%1000000007
    return dp[len(arr)-1][len(arr[0])-1]
for _ in range(int(input())):
    r,c,b = list(map(int, input().split()))
    arr = [[1 for x in range(c)] for x in range(r)]
    for _ in range(b):
        i, j = list(map(int, input().split()))
        arr[i][j] = 0
    print(getWays(arr))
