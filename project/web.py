from flask import Flask,render_template,request
import weather

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
    print(selectValue)
    result=weather.weather(selectValue)
    return render_template("weather.html",result=result)


app.run(debug=True)