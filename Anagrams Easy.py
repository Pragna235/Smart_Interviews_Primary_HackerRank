from collections import Counter
t = int(input())
for _ in range(t):
    arr = input().split()
    print(Counter(arr[0]) == Counter(arr[1]))
