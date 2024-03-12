A = int(input())
B = list(input())

for i in range(0, 3, 1):
    print(A*int(B[2-i]))
    
print(A*int(''.join(B)))