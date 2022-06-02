# cook your dish
for _ in range(int(input())):
    n=int(input())
    n2=input()
    stack=['(']
    top=0
    post=''
    m={}
    m["("]=0;m["+"]=1;m["-"]=1;m["*"]=2;m["/"]=2;m["^"]=3;
    operator='/*-+^'
    for i in range(n):
        if n2[i] >= "A" and n2[i] <= "Z": 
            post+=n2[i]
        elif n2[i] in operator:
            while m[stack[top]]>=m[n2[i]]:
                post+=stack.pop()
                top-=1
            stack.append(n2[i])
            top+=1
        elif n2[i]=='(':
            stack.append(n2[i])
            top+=1
        elif n2[i]==')':
            while stack[top]!='(':
                post+=stack.pop()
                top-=1
            stack.pop()
            top-=1
    while stack[top]!='(':
        post+=stack.pop()
        top-=1
    print(post)
        