from datetime import timedelta,datetime

today = datetime.today()
mymonth = '0'+str(today.month) if len(str(today.month)) ==1 else today.month
yesday = today.day-1
myday = '0'+str(yesday) if len(str(yesday)) ==1 else yesday
yesterday = f"{mymonth}{myday}"
print(yesterday)

tomoday=today.day+1
tomorday='0'+str(tomoday) if len(str(tomoday)) ==1 else tomoday
tomorrow=f"{mymonth}{tomorday}"
print(tomorrow)