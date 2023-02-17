from flask import Flask,render_template,request
import weather
import weather1

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/weather")
def pjweather():
    selectValue=request.args.get("city")
    
    if selectValue is None or selectValue =="":
        selectValue='po_143'
    else:
        selectValue=selectValue
    
    selectValue1=request.args.get("city1")
    if selectValue1 is None or selectValue1 =="":
        selectValue1='po2_143'
    else:
        selectValue1=selectValue1
    
    # print(selectValue1)
    result=weather.weather(selectValue)
    result1=weather1.weather1(selectValue1)
    
    return render_template("weather.html",result=result,result1=result1)

@app.route("/weather1")
def pjweather1():
    selectValue1=request.args.get("city1")
    if selectValue1 is None or selectValue1 =="":
        selectValue1='po2_143'
    else:
        selectValue1=selectValue1
    selectValue=request.args.get("city")
    
    if selectValue is None or selectValue =="":
        selectValue='po_143'
    else:
        selectValue=selectValue
    result1=weather1.weather1(selectValue1)
    result=weather.weather(selectValue)
    
    return render_template("weather.html",result=result,result1=result1)


app.run(debug=True)