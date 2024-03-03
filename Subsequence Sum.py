def checkBits(n, k):
    return (n & (1 << (k)))


def generateSubsequence(arr):
    res = []
    for i in range(1 << len(arr)):
        temp = 0
        for j in range(len(arr)):
            if checkBits(i, j):
                temp += arr[j]
        res.append(temp)
    return res


def searchlowerbound(arr, lb):
    low = 0
    high = len(arr)
    while (low < high):
        mid = (high + low) // 2
        if (lb <= arr[mid]):
            high = mid
        else:
            low = mid + 1
    return low


def searchupperbound(arr, ub):
    low = 0
    high = len(subs2)
    while (low < high):
        mid = (high + low) // 2
        if (ub >= arr[mid]):
            low = mid + 1
        else:
            high = mid
    return low


for _ in range(int(input())):
    n, a, b = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    subs1 = generateSubsequence(arr[:(n // 2) + 1])
    subs2 = sorted(generateSubsequence(arr[(n // 2) + 1:]))
    c = 0
    for i in subs1:
        lowerbound = searchlowerbound(subs2, a - i)
        upperbound = searchupperbound(subs2, b - i)
        c += (upperbound - lowerbound)

    print(c)
