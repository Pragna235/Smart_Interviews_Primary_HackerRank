t = int(input())
vowels = "aeiou"

for _ in range(t):
    a = {'w':0, 'v': 0, 'c':0}
    st = input().strip().split()
    a['w'] = len(st)
    for word in st:
        for j in word:
            if j.lower() in vowels:
                a['v']+=1
            else:
                a['c']+=1
    print(a['w'], a['v'], a['c'])
