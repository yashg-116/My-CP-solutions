# cook your dish here
for i in range(int(input())):
    n,m=map(int,input().split())
    p=[1]*(n+1)
    summ=0
    for j in range(2,n+1):
        k=m%j
        summ+=p[k]
        for l in range(k,n+1,j):
            p[l]+=1
    print(summ)

