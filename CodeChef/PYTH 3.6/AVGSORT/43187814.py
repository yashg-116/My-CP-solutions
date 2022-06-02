# cook your dish here
n1=int(input())
for i in range(n1):
    n=int(input())
    k=0
    ar=list(map(int,input().split()))
    t=ar[0]
    for j in range(1,len(ar)):
        a=ar[j]
        if a>t:
            k+=1
        t=a
    if k>=1:
        print("YES")
    else:
        print("NO")
    
