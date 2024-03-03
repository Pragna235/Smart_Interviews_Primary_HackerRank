n = int(input())
arr = list(map(int, input().split()))
t = int(input())
sumarr = dict()
sumarr[0] = arr[0]
for i in range(1,len(arr)):
    sumarr[i] = sumarr[i-1]+arr[i]
for _ in range(t):
    a, b = list(map(int, input().split()))
    try:
        print(sumarr[b] - sumarr[a-1])
    except:
        print(sumarr[b])
