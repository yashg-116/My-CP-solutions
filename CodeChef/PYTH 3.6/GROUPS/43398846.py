# cook your dish here
n1=int(input())
for i in range(n1):
    s=input()
    t=s.find("1")
    l=len(s)
    if t!=-1:
        m=1
        k=s[t]
        for j in range(t+1,l):
            if s[j]!=k and s[j]=="1":
                m+=1
            k=s[j]
    else:
        m=0
    print(m)
    
    
    
