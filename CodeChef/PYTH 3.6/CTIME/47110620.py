# cook your dish here
# cook your dish here
for i in range(int(input())):
    n,k,f = map(int, input().split())
    t1=0;t2=0
    ar1=list() 
    ar2=list()
    summ = 0
    for j in range(n):
        s,e = map(int, input().split())
        ar1.append(s)
        ar2.append(e)
    ar1.sort()
    ar2.sort()
    for j in range(n):
        summ+= max(0, ar1[j]-t2)
        t2 = max(t2, ar2[j])
    summ += f-t2
    if summ >= k:
        print("YES")
    else:
        print("NO")