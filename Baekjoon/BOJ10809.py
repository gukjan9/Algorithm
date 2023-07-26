S = str(input())

def alphabetOrder(n):
    input = list(n)
    arr = [-1] * 26

    for i in range(len(input)):
        if(arr[ord(input[i])-97] == -1):
            arr[ord(input[i])-97] = i

    for i in range(len(arr)):
        print(str(arr[i]), end=" ")
    # print(' '.join([str(num) for num in result]))

alphabetOrder(S)

# find 함수 이용하면 훨씬 간단함