# cook your dish here
# cook your dish here

n1=int(input())
for i in range(n1):
    arr =list(map(int,input().strip().split(" ")))
    a=arr[0]
    b=arr[1]
    if b!=0:
        print(a%b)
    else:
        print(a)

