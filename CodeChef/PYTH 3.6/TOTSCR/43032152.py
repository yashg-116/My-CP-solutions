# cook your dish here
def scor():
    sum=0
    x,y=map(int,input().split(" "))
    a2=list(map(int,input().split(" ")))
    for j in range(x):
        s=input()
        k=0
        for c in s:
            if c=="1":
                sum=sum+a2[k]
            k+=1
        print(sum)
        sum=0
    
n=int(input())
for i in range(n):
    scor()
    
