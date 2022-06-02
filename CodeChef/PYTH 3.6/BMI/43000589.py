# cook your dish here
def BMI(w,h):
    bmi=w//(h*h)
    if bmi<=18:
        return 1
    elif bmi>18 and bmi<=24:
        return 2
    elif bmi>=25 and bmi<=29:
        return 3
    else:
        return 4
n=int(input())
for i in range(n):
    w,h=map(int,input().split(" "))
    print(BMI(w,h))
    
