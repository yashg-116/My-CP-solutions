# cook your dish here
for i in range(int(input())):
    k=0
    n1=int(input())
    n2=list(map(int,input().split()))
    for j in n2:
        if j&1:
            k+=1
    print(k//2)