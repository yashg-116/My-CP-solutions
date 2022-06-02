# cook your dish here
for i in range(int(input())):
    n, m = map(int, input().split())
    temp= pow(2,n,1000000007)
    temp-=1
    res = pow(temp,m,1000000007)
    print(res)
