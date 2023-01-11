from openpyxl import Workbook

wb = Workbook()
ws = wb.active

ws.title = "내 시트"
wb.save("sample.xlsx")
wb.close()