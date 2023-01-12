import pymysql
def savefiles(ko,en,filename):
    
    db=pymysql.connect(host='127.0.0.1',port=3306,user='student',password='student123',db='siseong',charset='UTF8')
    cursor=db.cursor()
    sql=f'''
            INSERT INTO files 
            (ko, en, filename, regdate) 
            VALUES
            ('{ko}','{en}','{filename}',NOW())
        '''
    cursor.execute(sql)
    db.commit()
    db.close()
