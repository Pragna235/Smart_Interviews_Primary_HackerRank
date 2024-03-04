def powerGame(n,arA,arB):
    p1 = 0
    p2 = 0
    cnt = 0
    while (p1 < n and p2 < n):
        if arA[p1] > arB[p2]:
            cnt += 1
            p1 += 1
            p2 += 1
        elif arA[p1] <= arB[p2]:
            p1 += 1

    print(cnt)

m = int(input())
for i in range(m):
    n = int(input())
    arA = list(map(int, input().split()))[:n]
    arA = sorted(arA)
    arB = list(map(int, input().split()))[:n]
    arB = sorted(arB)
    powerGame(n,arA,arB)
