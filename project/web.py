from flask import Flask,render_template,request

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/weather")
def weather():
    return render_template("weather.html")


app.run(debug=True)