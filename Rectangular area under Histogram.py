t = int(input())

for _ in range(t):
    n = int(input())
    lis = list(map(int, input().split()))
    stack = []
    stack.append(0)
    if (len(lis) == 1):
        print(lis[0])
        continue
    i = 1
    j = 0
    maxArea = lis[0]
    while i < len(lis):
        if not stack or lis[i] >= lis[stack[-1]]:
            stack.append(i)
            i += 1
        else:
            top = stack.pop()
            area = lis[top] * ((i - stack[-1] - 1) if stack else i)
            maxArea = max(area, maxArea)

    while stack:
        top = stack.pop()
        area = lis[top] * ((i - stack[-1] - 1) if stack else i)
        maxArea = max(area, maxArea)
    print(maxArea)
