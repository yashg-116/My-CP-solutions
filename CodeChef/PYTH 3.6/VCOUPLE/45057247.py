# cook your dish here
n1=int(input())
for j in range(n1):
    n2=int(input())
    b=list(map(int,input().split()))
    g=list(map(int,input().split()))
    b.sort()
    g.sort(reverse=True)
    maxx=0
    for i in range(n2):
        sum=b[i]+g[i]
        if sum>=maxx:
            maxx=sum
    print(maxx)

