# matrix in python

row = int(input("Enter number of row = "))
col = int(input("Enter number of columns = "))

matrix = []

for i in range(row):
    row = []
    for j in range(col):
        value = int(input("Enter element = "))
        row.append(value)
    matrix.append(row)

print("\nThe matrix is:")
for i in range(row):
    for j in range(col):
        print(matrix[i][j], end=" ")
    print()
