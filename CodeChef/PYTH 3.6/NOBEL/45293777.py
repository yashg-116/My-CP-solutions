# cook your dish here
for i in range(int(input())):
    n, m = map(int, input().split())
    li = list(map(int, input().split()))
    li1=set(li)
    if m > len(li1):
        print("Yes")
    else:
        print("No")
