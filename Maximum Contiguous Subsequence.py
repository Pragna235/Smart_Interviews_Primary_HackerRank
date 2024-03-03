def findLongestConseqSubseq(arr, n):
    s = dict()
    ans = 0
    for i in arr:
        s[i] = 0
    for i in range(n):
        if (arr[i] - 1) not in s.keys():
            j = arr[i]
            while (j in s.keys()):
                j += 1
            ans = max(ans, j - arr[i])
    return ans


for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    print(findLongestConseqSubseq(arr, n))
