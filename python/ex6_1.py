def test(idx):
    abc = ['a','b','c']
    try:
        print(abc[idx])
    except IndexError as ie:
        print('インデックスが範囲外になっています。')

a = 123
test(a)
a = 2
test(a)
