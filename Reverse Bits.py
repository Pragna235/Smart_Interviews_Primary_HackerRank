for t in range(int(input())):
    n=int(input())
    n=bin(n)
   
    n=str(n)
    n=n[2:]
    length=len(n)
   
    rem=32-length
   
   
    n=(rem*'0') + n
   
    n=n[::-1]
   
   
 
    print(int(n,2))
