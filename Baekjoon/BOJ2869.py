def goUp(up, down, height):
    '''day = 1
    while (up*day - down*(day-1) < height):
        day += 1
    print(day)'''
    speed = up - down
    day = ((height - up)/speed)

    if(day - int(day)) >= 0.5:
        day = int(day) + 1
    else:
        day = int(day)

    if(day < 1):
        print(day+2)
    else:
        print(day+1)

A, B, C = map(int, input().split())
goUp(A, B, C)