for x in range(1,10):
    for y in range(1,10):
        if(x==1):
            print(x,y)
        elif(x==2):
            print(1,x,y)          
        elif(x==3):
            print(2,x,y)
        else:
            print(x,y,x,y)

        
'''
wb=Workbook()
ws=wb.active
for x in range(1,6):
    for y in range(1,x+1):
        ws.cell(row=x,column=y).value = '*'
        
        

wb.save("star.xlsx")
wb.close()

lb = load_workbook("star.xlsx")
ws=lb.active
for x in range(1,6):
    for y in range(1,x+1):
        if(x==1):
            print(ws.cell(row=x,column=y).value,end=" ")
        elis
print()

lb.close() 
'''       