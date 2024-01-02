from operator import itemgetter
from collections import OrderedDict

def cnt_Srt(lst,n):
    arr={}
    cnt = 0
    for i in range(n):
        if lst[i] in arr:
            arr[lst[i]] += 1
        else:
            arr[lst[i]] = 1

    sorted_x = OrderedDict(sorted(arr.items(), key=itemgetter(1)))

    for elem in sorted_x:
        if sorted_x[elem] == 1:
            print(elem, end=" ")
        else:
            for i in range(sorted_x[elem]):
                print(elem, end=" ")

m=int(input())
for i in range(m):
    n=int(input())
    a = list(map(int, input().split()))[:n]
    lst = sorted(a)
    cnt_Srt(lst,n)
    print()
