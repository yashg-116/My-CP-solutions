# cook your dish here
n1=int(input())
for i in range(n1):
    n=int(input())
    ar=list(map(int,input().split()))
    t=sum(ar)
    if t%2==0:
        print(0)
    else:
        if 2 in ar:
            print(1)
        else:
            print(-1)
