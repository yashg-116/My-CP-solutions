# cook your dish here

def Binary(x):
    return int(bin(x)[2:])
n=int(input())

for i in range(n):
    num=int(input())
    r=str(Binary(num))
    t=0
    n1=""
    n2=""
    for k in (r):
        if k=="0":
            n1=n1+"1"
            n2=n2+"1"
        else:
            if t==0:
                n1=n1+"1"
                n2=n2+"0"
            else:
                n1=n1+"0"
                n2=n2+"1"
        t+=1
    print(int(n1,2)*int(n2,2))
    
    
    


