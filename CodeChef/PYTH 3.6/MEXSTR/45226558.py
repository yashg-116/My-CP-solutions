# cook your dish here
n1=int(input())
for i in range(n1):
    s=input()
    if "0" not in s:
        print(0)
    elif "1" not in s:
        print(1)
    else:
        n=len(s)
        l=[0]*n
        cnt=0
        one=False
        zero=False
        for j in range(n-1,-1,-1):
            l[j]=cnt
            if s[j]=="1":
                one=True
            if s[j]=="0":
                zero=True
            if one and zero:
                cnt+=1
                zero=False;one=False
        p=s.find("1")
        f=""
        while True:
            f+=s[p]
            p0=s.find("0",p+1)
            p1=s.find("1",p+1)
            if p0==-1:
                f+="0"
                break
            if p1==-1:
                f+="1"
                break
            if (l[p0]<=l[p1]):
                p=p0
            else:
                p=p1
        print(f)





