# cook your dish here
n1=int(input())
for i in range(n1):
    h,x,y,c=map(int,input().split())
    if h*(x+y//2)<=c:
        print("YES")
    else:
        print("NO")
