from flask import Flask,render_template,request,redirect,url_for
import papago

app=Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")


@app.route("/make",methods=['GET','POST'])
def make():
    text="안녕"
    if request.method=='POST':
        print(request.form['text'])
        text = request.form['text']
    papago.makePapago(text)
    return redirect(url_for('index'))

app.run(debug=True)