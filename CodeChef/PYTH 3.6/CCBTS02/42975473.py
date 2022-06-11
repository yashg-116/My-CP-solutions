# cook your dish here
n=int(input())
s="STOP"
t=1
k=0
for i in range(n):
    n1=int(input())
    k=list(input().split(" "))
    for j in k:
        if j=="stop":
            t+=1
        else:
            t=0
        if t==2:
            k=1
            break
    if k==1:
        print("404")
    else:
        print("200")
    t=1
    k=0
    
