# cook your dish her

def reverse(n2):
    t=0
    while n2>0:
        p=n2%10
        t=t*10+p
        n2=n2//10
    print(t)
n=int(input())
for i in range(n):
    n1=int(input())
    reverse(n1)
