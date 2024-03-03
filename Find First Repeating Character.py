from collections import Counter

t = int(input())

for _ in range(t):
    st = Counter(input())
    flag = 1
    for i in st.keys():
        if st[i] >1:
            print(i)
            flag = 0
            break
    if flag:
        print(".")
