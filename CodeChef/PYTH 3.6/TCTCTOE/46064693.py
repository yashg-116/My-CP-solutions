# cook your dish here
for i in range(int(input())):
    ar=[]
    p="X";n="O";x=0;y=0;k=0;t=0;a=0;b=0
    for j in range(3):
        s=input()
        if '_' in s:
            t=1
        a+=s.count("X")
        b+=s.count("O")
        ar.append(s)
    if ar[0][0]==p:            
        if ar[0][0]==ar[0][1] and ar[0][0]==ar[0][2]:
            x+=1
        if ar[0][0]==ar[1][1] and ar[0][0]==ar[2][2]:
            x+=1       
        if ar[0][0]==ar[1][0] and ar[0][0]==ar[2][0]:
            x+=1   
        
    if ar[0][1]==p:
        if ar[0][1]==ar[1][1] and ar[0][1]==ar[2][1]:
            x+=1
    if ar[0][2]==p:
        if ar[0][2]==ar[1][2] and ar[0][2]==ar[2][2]:
            x+=1
    if ar[1][0]==p:
        if ar[1][0]==ar[1][1] and ar[1][0]==ar[1][2]:
            x+=1
    if ar[2][0]==p:
        if ar[2][0]==ar[2][1] and ar[2][0]==ar[2][2]:
            x+=1
        if ar[2][0]==ar[1][1] and ar[2][0]==ar[0][2]:
            x+=1
    if ar[0][0]==n:            
        if ar[0][0]==ar[0][1] and ar[0][0]==ar[0][2]:
            y+=1
        if ar[0][0]==ar[1][1] and ar[0][0]==ar[2][2]:
            y+=1
        if ar[0][0]==ar[1][0] and ar[0][0]==ar[2][0]:
            y+=1
    if ar[0][1]==n:
        if ar[0][1]==ar[1][1] and ar[0][1]==ar[2][1]:
            y+=1
    if ar[0][2]==n:
        if ar[0][2]==ar[1][2] and ar[0][2]==ar[2][2]:
            y+=1
    if ar[1][0]==n:
        if ar[1][0]==ar[1][1] and ar[1][0]==ar[1][2]:
            y+=1
    if ar[2][0]==n:
        if ar[2][0]==ar[2][1] and ar[2][0]==ar[2][2]:
            y+=1
        if ar[2][0]==ar[1][1] and ar[2][0]==ar[0][2]:
            y+=1
    if (y==1 and x==1) or (a-b)<0 or (a-b)>1 or (x==1 and a==b) or (y==1 and a>b):
        k=1
        print(3)
    if (k==0) and ((x>=1 and y==0) or (x==0 and y>=1)):
        k=1
        print(1)
    if k==0 and t==0 and (a==5 and b==4):
        print(1)
    if k==0 and t!=0:
        print(2)