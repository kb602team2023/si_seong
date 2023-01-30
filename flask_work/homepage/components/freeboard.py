from flask import Blueprint,render_template,request,redirect
from components.db import freeboardmanage

app=Blueprint('freeboard',__name__,url_prefix='/freeboard')

@app.route("/select")
def select():
    res = freeboardmanage.select()
    print("select 됨",res)
    return render_template("freeboard/select.html",res=res)

@app.route("/insertform")
def insertform():
    return render_template("freeboard/insertform.html")

@app.route("insertproc",methods=['post'])
def insertproc():
    title=request.form['title']
    content=request.form['content']
    writer=request.form['writer']
    freeboardmanage.insert(title,content,writer)
    return redirect("/freeboard/select")

@app.route("view")
def view():
    idx = int(request.args.get('idx'))
    res = freeboardmanage.selecrow(idx)
    print("selectrow 됨")
    return render_template("freeboard/view.html",res=res)