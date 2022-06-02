# cook your dish here
n1=int(input())
for i in range(n1):
    n,x=map(int,input().split())
    maxx=0
    for j in range(n):
        a,b=map(int,input().split())
        if a<=x and b>=maxx:
            maxx=b
    print(maxx)

