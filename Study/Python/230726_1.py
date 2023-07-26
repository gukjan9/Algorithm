# N*1 의 시간 복잡도를 가진다
# 빅오 표기법 - O(N)
# 빅 오메가 표기법 - 오메가(1)

A = int(input())

def TorF(n):
    arr = [3, 5, 6, 1, 2, 4]

    #for i in range(len(arr)):
    for i in arr:
        #if n == arr[i]:
        if n == i:
            return True

    return False
print(TorF(A))