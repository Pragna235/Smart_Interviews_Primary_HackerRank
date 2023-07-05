for t in range(int(input())):
    x,y=map(int,input().split())
    x=(1<<x)
    y=(1<<y)
    print((x|y)%1000000007)
