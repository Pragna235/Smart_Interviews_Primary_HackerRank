from sys import stdin, stdout
import math

def apown(x, n):
    result = 1
    mod = 1000000007
    while n:
        if(n &1):
            result = (result*x)%mod
        x = ((x%mod)*(x%mod))%mod
        n = n >>1
    return result

t=(int(input()))
while(t!=0):
    n = int(stdin.readline())
    i= ((int(math.sqrt((n<<3)-1))) + 1) >>1
    x = n - ((i*(i-1)) >>1)-1
    stdout.write(str((apown(2, i) + apown(2, x))%1000000007) +'\n')
    t=t-1
