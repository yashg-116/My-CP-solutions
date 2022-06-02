# cook your dish here
n1=int(input())
for j in range(n1):
    n,K=map(int,input().split())
    s=input()
    maxx=0
    k=0
    for i in s:
        if i=='*':
            k+=1
            if maxx<k:
                maxx=k
        else:
            k=0
    if maxx>=K:
        print("YES")
    else:
        print("NO")
