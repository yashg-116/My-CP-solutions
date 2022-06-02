# cook your dish here
n1=int(input())
t=0
for i in range(n1):
    s=int(input())
    intro=list(map(int,input().split()))
    for j in range(s):
        ar=list(map(int,input().split()))
        t=t+ar[1]
        for k in range(2,ar[0]+1):
            t=t+(ar[k]-intro[j])
    print(t)
    t=0
