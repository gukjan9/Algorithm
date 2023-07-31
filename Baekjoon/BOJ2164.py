# 2164. 카드2
from collections import deque

def card2(N):
    # queue = []
    # for i in range(N):
    #     queue.append(i+1)
    # N_List = queue
    #
    # for i in range(len(N_List)):
    #     if(len(N_List) < 2):
    #         return N_List
    #     else:
    #         N_List.pop(0)
    #         if(len(N_List) < 2):
    #             return N_List
    #         else:
    #             a = N_List.pop(0)
    #             N_List.append(a)
    #
    # return N_List

    deq = deque([i for i in range(1, N+1)])
    while len(deq) > 1:
        deq.popleft()
        deq.append(deq.popleft())

    return deq.pop()

N = int(input())
# print(*card2(N))
print(card2(N))

# https://wiki.python.org/moin/TimeComplexity
# https://docs.python.org/ko/3/library/collections.html#collections.deque