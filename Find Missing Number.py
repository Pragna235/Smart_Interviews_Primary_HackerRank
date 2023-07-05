for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    #print(arr)
    sums=((n+1)*(n+2))//2
    s=sum(arr)
    print(sums-s)
    
