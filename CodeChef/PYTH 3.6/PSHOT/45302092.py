# cook your dish here
for i in range(int(input())):
    n=int(input())
    s=input()
    a=0;b=0;a1=0;b1=0
    k=0
    for j in range(2*n):
        if j%2==0:
            a1+=1
            if s[j]=="1":
                a+=1
        if j%2!=0:
            b1+=1
            if s[j]=="1":
                b+=1
        if (a+(n-a1))<b:
            print(j+1)
            k=1
            break
        if (b+(n-b1))<a:
            print(j+1)
            k=1
            break
    if k==0:
        print(2*n)


