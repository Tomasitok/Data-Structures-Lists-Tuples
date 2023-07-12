def divisible_by_2(my_list=[]):
    if len(my_list) == 0:
        return None
    new_list = [False] * len(my_list)
    r = 0
    for i in my_list:
        if i % 2 == 0:
            new_list[r] = True
        r += 1
    return new_list