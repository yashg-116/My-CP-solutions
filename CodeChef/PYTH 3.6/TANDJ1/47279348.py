# cook your dish here
# cook your dish here
for i in range(int(input())):
    a,b,c,d,k=map(int,input().split())
    summ=abs(a-c)+abs(b-d)
    flag=0
    if (summ==k):
        flag=1
    if (k-summ)>0:
        if(k-summ)%2==0:
            flag=1
    if flag==1:
        print("YES")
    else:
        print("NO")