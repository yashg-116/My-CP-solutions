for i in range(int(input())):
    s1=input()
    if s1[0]=="1":
        s1=s1[0]+"0"+s1[1:]
    else:
        s1="1"+s1
    print(s1)