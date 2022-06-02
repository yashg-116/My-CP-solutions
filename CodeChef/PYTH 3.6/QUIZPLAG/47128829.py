# cook your dish here
t=int(input())
for i in range(t):
    l=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    dic={}
    for j in l2:
        if j in dic:
            dic[j]+=1
        else:
            dic[j]=1
    c=0
    p=[]
    for j in dic:
        if j<=l[0] and dic[j]>=2:
            c+=1
            p.append(j)
    p.sort()
    if c>0:
        print(c,end=" ")
        for j in p:
            print(j,end=" ")
        print()
    else:
        print(0)
            
            