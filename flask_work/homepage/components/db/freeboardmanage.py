import pymysql

host='192.168.0.80'
port=3306
user='student'
password='student123'
dbname='siseong'
charset='utf8'

def select(page):
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    startrow=(page-1)*3
    sql=f'select * from freeboard order by idx desc limit {startrow},3'
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

def selecpagecntrowcnt():
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql=f'select count(idx) from freeboard'
    cursor=db.cursor()
    cursor.execute(sql)
    res=cursor.fetchone()
    rowcnt=res[0]
    pagecnt=int(rowcnt/3)
    pagecnt=pagecnt if rowcnt%3==0 else pagecnt+1
    db.close()
    return pagecnt,rowcnt

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

def delete(idx):
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql=f"""
    DELETE FROM freeboard
    WHERE idx={idx}
    """
    cursor=db.cursor()
    cursor.execute(sql)
    db.commit()
    db.close()

def update(title,content,writer,idx):
    db=pymysql.connect(
        host=host,port=port,
        user=user,passwd=password,
        db=dbname,charset=charset
    )
    sql=f"""
    UPDATE freeboard
    SET title ='{title}',
        content ='{content}',
        writer ='{writer}'
    WHERE idx={idx}
    """
    cursor=db.cursor()
    cursor.execute(sql)
    db.commit()
    db.close()