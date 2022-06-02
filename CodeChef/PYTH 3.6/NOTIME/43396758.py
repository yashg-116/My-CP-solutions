# cook your dish here
a,b,c=map(int,input().split())
ar=list(map(int,input().split()))
k=0
for i in ar:
    if i+c>=b:
        k=1;break
if k==1:
    print("YES")
else:
    print("NO")
    
