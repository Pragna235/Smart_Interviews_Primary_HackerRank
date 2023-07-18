for t in range(int(input())):
    n=int(input())
    s=(((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1))
    print(s)
