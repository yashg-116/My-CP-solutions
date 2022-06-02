# cook your dish here
n1=int(input())
for  i in range(n1):
    k1,k2,k3,v=map(float,input().split())
    v1=k1*k2*k3*v
    v2=round(100/v1,2)
    if v2 < 9.58 :
        print("YES")
    else:
        print("NO")

