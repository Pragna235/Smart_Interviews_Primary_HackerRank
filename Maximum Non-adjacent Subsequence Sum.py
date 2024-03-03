def maxSubsetSum(arr):
    dp = [(-1<<31) for i in range(len(arr)+1)]
    dp[0] = arr[0]
    if(len(arr) ==1):
        return dp[0]
    for i in range(1, len(arr)):
        dp[i] = max(max(arr[i]+ dp[i-2], dp[i-1]), arr[i])
    # print(dp)
    return max(dp[len(arr)-1], dp[len(arr)-2])

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    print(maxSubsetSum(arr))
