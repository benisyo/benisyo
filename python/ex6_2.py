def add_number(a,b):
    try:
        return a + b
    except TypeError as te:
        print('数値以外のデータが与えられています。')

print(add_number(3,'4'))
print(add_number(3,4))
add_number(2,3)

print(id(print))
print(type(print))
