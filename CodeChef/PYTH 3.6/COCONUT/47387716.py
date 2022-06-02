# cook your dish here
for i in range(int(input())):
    a,b,c,d=map(int,input().split())
    if c%a==0:
        c=c//a
    else:
        c=c//a + 1
    if d%b==0:
        d=d//b
    else:
        d=d//b + 1
    print(c+d)
