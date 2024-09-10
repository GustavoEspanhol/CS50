while True:
    try:
        H = int(input("Height: "))
        if (H >= 1) and (H <= 8):
            break
    except:
        print("", end="")

spaces = 1
# prints newline
for j in range(H):

    # prints spaces
    for spaces in range(H-j-1):
        print(" ", end="")

    # prints hashes
    for i in range(j+1):
        print("#", end="")

    print()



