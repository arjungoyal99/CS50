while True:
    try:
        print("Height: ",end="")
        a=int(input())
        if a>=0 and a<24:
            break
    except:
        pass
for i in range(a):
    print(" "*(a-i-1),end="")
    print("#"*(i+1),end="")
    print("  ",end="")
    print("#"*(i+1))