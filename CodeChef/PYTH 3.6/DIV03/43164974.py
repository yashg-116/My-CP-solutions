# cook your dish here
def Daan():
    l=list(map(int,input().split(" ")))
    l1=l[::-1]
    k=int(input())
    m=len(l1)
    for j in l1:
        k=k-j
        if k<0:
            t=m
            break
        m-=1
    print(t)
    
n1=int(input())
for i in range(n1):
    Daan()
