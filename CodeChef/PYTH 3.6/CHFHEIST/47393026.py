# cook your dish here
for i in range(int(input())):
    a,b,c,d=map(int,input().split())
    summ=0;
    summ+= a*c
    p=a//b
    summ+=p*a*d - (p*(p+1)*b*d)//2
    print(summ)
