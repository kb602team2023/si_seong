import zipfile

with zipfile.ZipFile('my.zip','w') as f:
    f.write('ex01.py')
    f.write('test.txt')
    f.write('ex02.py')


