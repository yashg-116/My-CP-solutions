for _ in range(int(input())):
    a= list(map(int, input().split()))
    a.sort()
    st=set(a)
    s=len(st)
    if s==1:
        print(0)
    if s==2:
        if a[0]==a[1]and a[0]!=a[2]:
            print(2)
        else:
            print(1)
    if s==3:
        print(2)
    if s==4:
        print(2)