
from collections import Counter


def isMapSet(mapA, mapB):
    # print(mapA, mapB)
    for i in mapA:
        try:
            if mapA[i] > mapB[i]:
                return False
        except:
            return False
    return True


for _ in range(int(input())):
    a, b = input().split()

    mapA = dict(Counter(a))
    mapB = dict(Counter(b))
    if (isMapSet(mapA, mapB) == False):
        print(-1)
        continue
    mapB = dict()
    i = 0
    j = 0
    ans = (1 << 31) - 1
    while (i < len(b) and j < len(b)):
        while (not isMapSet(mapA, mapB) and j < len(b)):
            try:
                mapB[b[j]] += 1
            except:
                mapB[b[j]] = 1
            j += 1

        if j == len(b) and isMapSet(mapA, mapB) == False:
            break
        ans = min(j - i, ans)
        while (isMapSet(mapA, mapB) and i < len(b) - len(a) + 1):
            mapB[b[i]] -= 1
            if mapB[b[i]] == 0:
                del mapB[b[i]]
            i += 1
        ans = min(ans, j - i + 1)
    # ans=min(ans, j-i-1)
    print(ans)
