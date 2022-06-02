for i in range(int(input())):
    n,w,w1=map(int,input().split())
    ar=list(map(int,input().split()))
    ar.sort()
    c=0
    k=list()
    k3=list()
    k2=0
    if w<=w1:
        print("YES")
    else:
        t2=0
        k=[];k3=[];k2=0;k4=1;c=1
        for j in range(n):
            t=ar[j]
            if t!=t2 and k2==1:
                k3.append(c)
                k.append(ar[j-1])
                c=0
                k2=0
                k4=1
            if t==t2:
                k2=1
                c+=1
                k4=0
            t2=t
        if k4==0 and k2==1:
            k3.append(c)
            k.append(ar[j-1])
        t=len(k)
        if t==0:
            print("NO")
        else:
            s1=0;hh=0
            for p in range(t):
                s1+=k[p]*(k3[p]//2)*2
                if (s1+w1)>=w:
                    print("YES")
                    hh=1
                    break
            if hh==0:
                print("NO")

