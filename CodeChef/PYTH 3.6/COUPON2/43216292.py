# cook your dish here
n1=int(input())
for i in range(n1):
    d,c=map(int,input().split())
    a1,a2,a3=map(int,input().split(" "))
    b1,b2,b3=map(int,input().split(" "))
    s1=a1+a2+a3
    s2=b1+b2+b3
    s=s1+s2
    if s1>=150 and s2>=150:
        if (s+d+d)>(s+c):
            print("YES")
        else:
            print("NO")
    elif s1>=150 or s2>=150:
        if (s+d+d)>(s+c+d):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")