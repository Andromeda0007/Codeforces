a, b, n = [int(x) for x in input().split()]

s1 = str(a)
s2 = ""


numbers = [s1+'0', s1+'1', s1+'2', s1+'3', s1+'4', s1+'5', s1+'6', s1+'7', s1+'8', s1+'9']

flag = False
for i in numbers:
    if(int(i)%b==0):
        flag = True
        s2 += i
        break

if(flag==False):
    print(-1)
    quit()
    
else:
    for i in range(0, n-1, 1):
        s2 += '0'
    
print(s2)
