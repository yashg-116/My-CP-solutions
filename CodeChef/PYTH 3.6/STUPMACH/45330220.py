for i in range(int(input())):
    n1=int(input())
    ar=list(map(int,input().split()))
    t=ar[0];k=0
    m=min(ar)
    p=ar.index(m)
    minn=ar[0]
    for j in range(n1):
        if ar[j]<=t:
            k+=ar[j]
            t=ar[j]
            if ar[j]<minn:
                minn=ar[j]
        elif ar[j]>t:
            k+=minn
    print(k)
        