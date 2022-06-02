# cook your dish here
for i in range(int(input())):
    n=int(input())
    s=input()
    s1=0
    k=0
    for i in range(n):
        s1+=int(s[i])
        if s1/(i+1) >= 0.5:
            print("YES")
            k=1
            break
    if k==0:
        print("NO")