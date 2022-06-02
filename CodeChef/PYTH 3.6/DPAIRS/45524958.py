n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
minn=min(a)
i1=a.index(minn)
maxx=max(b)
i2=b.index(maxx)
for i in range(n):
    print("{} {}".format(i,i2))
for i in range(m):
    if((b[i]+minn)!=(minn+maxx)):
        print("{} {}".format(i1,i))