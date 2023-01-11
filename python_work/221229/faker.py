from Faker import Faker
from openpyxl import Workbook
from openpyxl.styles import font

fak=Faker()

wb=Workbook()
ws=wb.active

ws.append([fak.name(),fak.address(),fak.company(),fak.email()])


for i in range(20):
    ws.append([fak.name(),fak.address(),fak.company(),fak.email()])

ws.column_dimensions['A'].width=20
ws.column_dimensions['B'].width=35
ws.column_dimensions['C'].width=20
ws.column_dimensions['D'].width=25

for cell in ws[1]:
    cell.font=font(color="ff0000",size=20,italic=True,bold=True)


wb.save("random.xlsx")
wb.close()
