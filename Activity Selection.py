def activitySelection(pairs):
    if (len(pairs) == 0):
        return 0
    c = 1
    prev = pairs[0][1]
    for i in range(len(pairs)):
        if pairs[i][0] >= prev:
            c += 1
            prev = pairs[i][1]
    return c


def makePair(start, end):
    res = []
    for i in range(len(start)):
        res.append((start[i], end[i]))
    res.sort(key=lambda x: x[1])
    return res


for _ in range(int(input())):
    n = int(input())
    start = list(map(int, input().split()))
    end = list(map(int, input().split()))
    pairs = makePair(start, end)
    print(activitySelection(pairs))
