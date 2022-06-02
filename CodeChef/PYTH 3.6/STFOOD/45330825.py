for i in range(int(input())):
    n1=int(input())
    ar1=list()
    for k in range(n1):
        ar=list(map(int,input().split()))
        p=(ar[1]//(ar[0]+1))
        ar1.append(p*ar[2])
    print(max(ar1))
        