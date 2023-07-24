def findPrimeNumber(num):
    count = 0
    cnt = 0

    if(num == 1):
        count = 1;
    else:
        for i in range(num+1, 2*num+1):
            for j in range(2, i):
                #print(f'i = {i}, j = {j}')
                if(i % j == 0):
                    break
                elif(i % j != 0):
                    cnt += 1

                if(cnt == i-2):
                    #print(f'cnt = {cnt}')
                    count += 1
            cnt = 0
    print(count)

while True:
    n = int(input())

    if n == 0:
        break

    findPrimeNumber(n)