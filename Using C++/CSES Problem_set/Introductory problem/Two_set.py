def Two_set(n):
    sum = n*(n+1)//2
    if(sum % 2 == 0):
        return "YES"
    else:
        return "NO"


n = int(input())
print(Two_set(n))
