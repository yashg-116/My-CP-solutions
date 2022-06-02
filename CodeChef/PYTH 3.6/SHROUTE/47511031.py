# cook your dish here
for i in range(int(input())):
    n, m = map(int, input().split())
    a1=list(map(int, input().split()))
    a2=list(map(int, input().split()))
    a3=[-1]*n
    a4=[-1]*n
    a5=[0]*n
    c=-1; k=0
    for j in range(n):
        if a1[j]==1:
            c=0
            k=1
        if c>-1:
            a3[j]=c
            c+=1
        if k==1:
            a5[j]=1
    c=-1; k=0
    for j in range(n-1,-1,-1):
        if a1[j]==2:
            c=0
            k=1
        if c>-1:
            a4[j]=c
            c+=1
        if k==1:
            a5[j]=1
    for j in range(m):
        p=a2[j]
        if p==1:
            print(0,end=" ")
        else:
            if a5[p-1]==1:
                if (a3[p-1]>-1 and a4[p-1]>-1):
                    print(min(a3[p-1],a4[p-1]),end=" ")
                elif a3[p-1]>-1:
                    print(a3[p-1],end=" ")
                else:
                    print(a4[p-1],end=" ")
            else:
                print(-1,end=" ")
    print()
                
    