# cook your dish here
for i in range(int(input())):
    x,y,a,b,d=map(int,input().split())
    if min(x/a,y/b)>=d:
        print("YES")
    else:
        print("NO")
