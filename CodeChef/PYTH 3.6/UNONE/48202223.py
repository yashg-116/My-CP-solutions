# cook your dish here
for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a2=list()
    a3=list()
    for j in a:
        if j%2==0:
            a2.append(j)
        else:
            a3.append(j)
    a3=a2+a3
    for j in a3:
        print(j,end=" ")
    print()
