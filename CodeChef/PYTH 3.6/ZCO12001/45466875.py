n=int(input())
s=list(map(int,input().split()))
cnt=0;a=0;cnt2=0;c=0;d=0;t=1
for i in range(n):
    if s[i]==1:
        cnt+=1
        cnt2+=1
        if cnt>a:
            a=cnt
            b=i+1
    if s[i]==2:
        cnt-=1
        cnt2+=1
    if cnt2>c:
        c=cnt2
        d=t
    if cnt==0 and i<n-2:
        cnt2=0
        t=i+2

print("{} {} {} {}".format(a,b,c,d))
