# 2164. 카드2
def card2(N):
    queue = []
    for i in range(N):
        queue.append(i+1)
    N_List = queue

    for i in range(len(N_List)):
        if(len(N_List) < 2):
            return N_List
        else:
            N_List.pop(0)
            if(len(N_List) < 2):
                return N_List
            else:
                a = N_List.pop(0)
                N_List.append(a)

    return N_List

N = int(input())
print(*card2(N))