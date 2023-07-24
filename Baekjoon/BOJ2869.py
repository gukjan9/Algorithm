def goUp(up, down, height):
    day = 1
    while (up*day - down*(day-1) < height):
        day += 1
    print(day)

A, B, C = map(int, input().split())
goUp(A, B, C)