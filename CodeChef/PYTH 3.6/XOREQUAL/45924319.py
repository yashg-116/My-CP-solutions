for i in range(int(input())):
    n=int(input())
    n-=1
    p1=2;p=1
    while n>0:
        if n&1:
            p=(p*p1)%1000000007
        n>>=1
        p1=(p1*p1)%1000000007
    print(p)