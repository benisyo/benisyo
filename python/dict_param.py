def foo(**kargs):
    print(kargs['bar'])
    print(kargs['num'])

foo(bar='bar',hoge='hoge',num=999)
