from collections import Counter

for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    res = []
    i, j = 0, k-1
    m = dict(Counter(arr[i:j+1]))
    res.append(len(m))
    while(j != n-1):
        i+=1
        j+=1
        m[arr[i-1]]-=1
        if(m[arr[i-1]] == 0):
            del m[arr[i-1]]
        try:
            m[arr[j]] +=1
        except:
            m[arr[j]] = 1
        res.append(len(m))
    print(*res)
