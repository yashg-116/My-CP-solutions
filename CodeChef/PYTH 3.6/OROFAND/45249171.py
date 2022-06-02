# cook your dish here
for i in range(int(input())):
    n,q=map(int,input().split())
    ar=list(map(int,input().split()))
    arr=[0]*32
    orr=0
    for j in ar:
        orr=orr|j
        k=0
        while j:
            t=j%2
            j//=2
            if t==1:
                arr[k]+=1
            k+=1
    print(orr)
    for j in range(q):
        a,b=map(int,input().split())
        k=0
        b2=ar[a-1]
        while b2:
            t=b2%2
            b2//=2
            if t==1:
                arr[k]-=1
            k+=1
        ar[a-1]=b
        k=0
        while b:
            t=b%2
            b//=2
            if t==1:
                arr[k]+=1
            k+=1
        summ=0
        cnt=0
        for l in arr:
            if l>=1:
                summ+=2**(cnt)
            cnt+=1
        print(summ)

