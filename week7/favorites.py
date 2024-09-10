import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file) #variable for the data read
    scratch, c, python = 0, 0, 0

    for row in reader:
        favorite = row["language"]

        if favorite == "scratch":
            scratch += 1
        elif favorite == "c":
            c += 1
        elif favorite == "python":
            python += 1

    print(f"scratch: {scratch}")
    print(f"c: {c}")
    print(f"python: {python}")



