def sums(t):
        s = 0
        while t > 0:
            d = t % 10
            s += d**2
            t //= 10
        return s
c=0
v,b = input().split()
v = int(v)
b = int(b)
for i in range(b,v-1,-1):
    n = i
    se = set()
    while n != 1:
        n = sums(n)
        if n in se:
            break
        se.add(n)
    if n==1:
         c+=1
print(c)