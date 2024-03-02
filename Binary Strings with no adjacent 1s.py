def getAll(n):
    res = [0, 2, 3]
    for i in range(3, n+1):
        res.append((res[i-1] + res[i-2])%1000000007)
    return res

res = getAll(10**5)

for _ in range(int(input())):
    print(res[int(input())])
