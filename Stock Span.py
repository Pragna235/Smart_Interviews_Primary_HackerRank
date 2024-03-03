def stockspan(arr, n):
    res = [1] * n
    st = []
    for i in range(len(arr) - 1, -1, -1):
        while (st != [] and arr[i] > arr[st[-1]]):
            x = st.pop()
            res[x] = x - i
        st.append(i)
    # print(st)
    while (st != []):
        x = st.pop()
        res[x] = x + 1
    return res


for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    print(*stockspan(arr, n))
