for i in range(int(input())):
    s=input()
    c=0
    maxx=0
    k=0
    for j in s:
        if j=="<":
            c+=1
            k+=1
        elif j==">":
            c-=1
            k+=1
        if c<0:
            break
        elif c==0:
            maxx=max(maxx,k)
    print(maxx)
    