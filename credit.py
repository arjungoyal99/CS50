a = input("Number: ")
b = int(a[0:2])
c = int(a[0:1])
if ((len(a) == 15 and b in (34, 37)) or (len(a) == 16 and b in (51, 52, 53, 54, 55)) or (len(a) in (13, 16) and c == 4)):
    n = int(a)
    m = n
    l = []
    u = []
    s = 0
    while m > 0:
        u.append(m % 10)
        m = m // 10
        l.append((m % 10) * 2)
        m = m // 10
    for i in l:
        while(i > 0):
            s = s + (i % 10)
            i = i // 10
    for j in u:
        s = s + j
    if s % 10 == 0:
        if (len(a) == 15 and b in (34, 37)):
            print("AMEX")
        elif (len(a) == 16 and b in (51, 52, 53, 54, 55)):
            print("MASTERCARD")
        elif (len(a) in (13, 16) and c == 4):
            print("VISA")
    else:
        print("INVALID")
else:
    print("INVALID")