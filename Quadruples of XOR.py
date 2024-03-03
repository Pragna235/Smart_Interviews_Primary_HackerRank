def quadXor(a, b, c, d, n):
    ab = []
    cd = []
    mp = dict()
    count = 0
    for i in range(n):
        for j in range(n):
            ab.append(a[i] ^ b[j])
            cd.append(c[i] ^ d[j])
            try:
                mp[c[i] ^ d[j]] += 1
            except:
                mp[c[i] ^ d[j]] = 1
    for i in ab:
        try:
            count += mp[i]
        except:
            pass
    return count


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    d = list(map(int, input().split()))
    print(quadXor(a, b, c, d, n))
