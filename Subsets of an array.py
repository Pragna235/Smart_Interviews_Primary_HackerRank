def checkBit(n,i):
    if((n>>i)&1):
        return 1
    else:
        return 0

               
   

for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    #print(arr)
   
    l=[]
    for i in range((1<<n)):
        subset=[]
        for j in range(n):
            if(checkBit(i,j)==1):
                subset.append(arr[j])
        l.append(subset)
    l.sort()
    #rint(l)
   
    for i in range(1,len(l)):
        for j in l[i]:
            print(j,end=" ")
        print()
    print()
