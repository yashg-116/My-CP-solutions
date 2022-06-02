# cook your dish here
n, q=map(int, input().split())
a=list(map(int, input().split()))
a.sort()
for i in range(q):
    x=int(input())
    if (x<a[0]):
        print("POSITIVE")
    elif (x>a[n-1] and n%2==0):
        print("POSITIVE")
    elif(x>a[n-1] and n%2!=0):
        print("NEGATIVE")
    else:
        low = 0
        high = n-1
        mid = 0
        t=a[(low+high)//2]
        while low <= high:
            mid = (high + low) // 2
            if a[mid] < x:
                low = mid + 1
            elif a[mid] > x:
                high = mid - 1
            else:
                break
        if a[mid]==x:
            print("0")
        elif high%2==0:
            print("NEGATIVE")
        elif high %2 !=0:
            print("POSITIVE")
            
    