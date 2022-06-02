# cook your dish here
for i in range(int(input())):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    a,b=map(int,input().split())
    if max(n-a,m-b)>=(n-x+m-y):
        print("YES")
    else:
        print("NO")