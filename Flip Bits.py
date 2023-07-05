for t in range(int(input())):
    x,y=map(int,input().split())
    result=x^y
    #print(result)
    count=0
    while(result!=0):
        if((result&1)==1):
            count+=1
        result=result>>1
    print(count)
        
    
