# cook your dish here
n=int(input())
ar=list(map(int,input().split()))
q=int(input())
ar2=list(map(int,input().split()))
s=sum(ar)
s1=s
for i in range(q):
    s1=(s1*2)%1000000007
    print(s1)