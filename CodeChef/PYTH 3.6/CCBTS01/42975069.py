# cook your dish here
n=int(input())
for j in range(n):
    k=0;k2=0;k3=0
    s=input()
    for i in s:
        if i=="P":
            k+=1
        elif i=="C":
            k2+=1
        elif i=="M":
            k3+=1
    if k==1 and k2==1 and k3==1:
        print("YES")
    else:
        print("NO")
