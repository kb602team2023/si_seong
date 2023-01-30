import pymysql

host='192.168.0.80'
port=3306
user='student'
password='student123'
dbname='siseong'
charset='utf8'

def select():
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql='select * from freeboard'
    cursor=db.cursor()
    cursor.execute(sql)
    res=cursor.fetchall()
    db.close()
    return res

def selecrow(idx):
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql=f'select * from freeboard where idx = {idx}'
    cursor=db.cursor()
    cursor.execute(sql)
    res=cursor.fetchone()
    db.close()
    return res

def insert(title,content,writer):
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql=f"""
    INSERT INTO freeboard
    (title,content,writer,regdate)
    VALUES
    ('{title}','{content}','{writer}',NOW())
    """
    cursor=db.cursor()
    cursor.execute(sql)
    db.commit()
    db.close()
    print("insert 해야함")

def delete():
    print("delete 해야함")

def update():
    print("update 해야함")