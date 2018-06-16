try:
    file = open('python.txt','r')
except FileNotFoundError as fne:
    print('ファイルが見つかりませんでした。確認してください。')
