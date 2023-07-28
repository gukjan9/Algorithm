# 단순 소수 찾기 - 제곱근까지만 확인 (int(math.sqrt(x)+1)
# 범위 내에 있는 모든 소수 찾기 - 에라토스테네스의 체 사용
#     1. 2부터 N까지 존재하는 모든 자연수를 나열한다.
#     2. 나열된 숫자 중에서 가장 작은 수를 x로 지정한다.
#     3. 나열된 숫자 중에서 x의 배수를 모두 제거한다. (이때, x는 제거하지 않는다)
#     4. 더 이상 반복할 수 없을 때까지 2번과 3번을 반복한다.
import math
def findPrimeNumber(num):
    # 시간 초과
    # count = 0
    # cnt = 0
    #
    # if(num == 1):
    #     count = 1;
    # else:
    #     for i in range(num+1, 2*num+1):
    #         for j in range(2, i):
    #             if(i % j == 0):
    #                 break
    #             elif(i % j != 0):
    #                 cnt += 1
    #
    #             if(cnt == i-2):
    #                 count += 1
    #         cnt = 0
    # print(count)
    arr = [True] * (num*2)
    cnt = 0

    for i in range(num, int(math.sqrt(num*2))+1):
        if arr[i] == True:
            j = 2
            while i*j <= num*2:
                arr[i * j] = False
                j += 1
    arr[num:num*2+1]
    for i in range(len(arr)):
        if arr[i]:
            cnt += 1

    print(cnt)

while True:
    n = int(input())

    if n == 0:
        break

    findPrimeNumber(n)