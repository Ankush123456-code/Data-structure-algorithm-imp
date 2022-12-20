def Repetitions(strr):
    cnt = 1
    prev = strr[0]
    maxi = 0
    for i in range(1, len(strr)):
        if prev == strr[i]:
            cnt += 1
        else:
            maxi = max(cnt, maxi)
            prev = strr[i]
            cnt = 1
    return max(maxi, cnt)


strr = input()
print(Repetitions(strr))
