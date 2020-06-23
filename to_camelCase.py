def to_camelCase(s):
    s = s.split()
    a=[]
    for j in s:
        t=''
        for k in range(len(j)):
            if k == 0 and ord(j[k]) >= 97 and ord(j[k]) <= 122:
                t += chr(ord(j[k])-32)
            elif k > 0 and ord(j[k]) < 97 and ord(j[k]) >= 65:
                t += chr(ord(j[k])+32)
            else:
                t += j[k]
        a.append(t)
    res = ''
    for i in a:
        res += i + ' '
    return res
