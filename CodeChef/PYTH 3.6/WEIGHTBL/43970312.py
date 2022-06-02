# cook your dish here
n=int(input())
for i in range(n):
    w1,w2,x1,x2,M=map(int,input().split())
    diff=w2-w1
    t1=x1*M
    t2=x2*M
    if diff>=t1 and diff<=t2:
        print(1)
    else:
        print(0)

