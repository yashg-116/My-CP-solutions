# cook your dish here
n1=int(input())
for i in range(n1):
    n=int(input())
    if n==1:
        print(20)
    elif n==2:
        print(36)
    elif n==3:
        print(51)
    elif n%4==0:
        print((n//4)*44+16)
    elif n%4==1:
        print((n//4)*44+12+20)
    elif n%4==2:
        print((n//4)*44+8+36)
    elif n%4==3:
        print((n//4)*44+4+51)

