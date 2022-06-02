# cook your dish here
n1=int(input())
for i in range(n1):
    n,x=map(int,input().split())
    ar=list(map(int,input().split()))
    k=0;s=1
    ar.sort()
    for j in range(1,len(ar)):
        if ar[j-1]!=ar[j]:
            s+=1
    if (n-s)>=x:
        print(s)
    else:
        print(n-x)