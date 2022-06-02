# cook your dish here
# cook your dish here
for i in range(int(input())):
    n=0
    n,k=map(int,input().split())
    s=""
    s=input()
    l=list(map(int,input().split()))
    summ = 0
    for p in range(1,n):
        if s[p]!=s[p-1]:
            summ+=1
        else:
            summ+=2
    for j in l:
        if n>1:
            if j==1:
                if s[1]==s[0]:
                    summ-=1
                else:
                    summ+=1
                if s[0]=="0":
                    s="1"+s[1:n]
                else:
                    s="0"+s[1:n]
            elif j==n:
                if s[n-2]==s[n-1]:
                    summ-=1
                else:
                    summ+=1
                if s[n-1]=="0":
                    s=s[0:n-1]+"1"
                else:
                    s=s[0:n-1]+"0"
            else:
                if s[j-2]==s[j-1]:
                    summ-=1
                else:
                    summ+=1
                if s[j]==s[j-1]:
                    summ-=1
                else:
                    summ+=1
                if s[j-1]=="0":
                    s=s[0:j-1]+"1"+s[j:n]
                else:
                    s=s[0:j-1]+"0"+s[j:n]
        print(summ)