# cook your dish here
import math
n=pow(10,7)+2
ar=[1]*n
ar[0]=ar[1]=0
ar2=[0]*n
for i in range(2,n):
    if (i*i)>=n:
        break
    if ar[i]:
        for j in range(i*i,n,i):
            ar[j]=0
c=0
for i in range(1,n):
    if ar[i]:
        c+=1
    ar2[i]=c
for i in range(int(input())):
    n1=int(input())
    if n1==2:
        print(1)
    elif n1==3:
        print(2)
    else:
        a=n1//2
        b=ar2[n1]-ar2[a]+1
        print(b)

