# cook your dish here
import math as m
n1=int(input())
for i in range(n1):
    u,v,a,s=map(int,input().split())
    V=(u*u)-(2*a*s)
    if V<0:
        print("Yes")
    else:
        V1=m.sqrt(V)
        if V1<=v:
            print('Yes')
        else:
            print("No")
