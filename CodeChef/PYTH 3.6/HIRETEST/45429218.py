# cook your dish here
for i in range(int(input())):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    r=""
    for j in range(n):
        s=input()
        a=0;b=0;
        for k in s:
            if k=="F":
                a+=1
            elif k=="P":
                b+=1
        if (a>=x) or (a>=(x-1) and b>=y):
            r+="1"
        else:
            r+="0"
    print(r)