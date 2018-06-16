def get_sum(**kargs):
    s = 0
    for i in range(kargs['start'],kargs['end'] + 1,1):
        s += i
    return s

print(get_sum(start=1,end=3))
