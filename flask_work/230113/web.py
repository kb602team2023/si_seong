from flask import Flask,render_template,request
import random
# from flaskext.markdown import Markdown
app=Flask(__name__)

win = 0
lose = 0
draw = 0
h=None
m=None
s=None

# Markdown(app,extentions=['n12br', 'fenced_code'])

@app.route("/")
def index():
    return render_template('index.html')

@app.route("/game")
def game():
    global win,lose,draw
    print(request.args.get('game'))
    com=random.randint(0,2) #0->가위 1->바위 2->보
    if request.args.get('game') is not None:
        if request.args.get('game')== '0':
            if com == 0:
                draw+=1
            elif com ==1:
                lose+=1
            else:
                win+=1
        if request.args.get('game')== '1':
            if com == 0:
                win+=1
            elif com ==1:
                draw+=1
            else:
                lose+=1
        if request.args.get('game')== '2':
            if com == 0:
                lose+=1
            elif com ==1:
                win+=1
            else:
                drow+=1                
        elif request.args.get('game')== '리셋':
            com=None
            win,draw,lose = 0,0,0
    return render_template('index.html',win=win,lose=lose,draw=draw,com=com)

@app.route("/time")
def time():
    global h,m,s
    
    if request.args.get('time') is not None \
    and request.args.get('time')!="":
        a=int(request.args.get('time'))
        # print(request.args.get('time'))
        h=a//3600
        b=a%3600
        m=b//60
        s=b%60
    else:
        h,m,s=0,0,0
    return render_template('index.html',h=h,m=m,s=s)

@app.route("/gugudan")
def gugudan():
    c=""
    
    if request.args.get("gugudan1") != "" and request.args.get("gugudan2") !="":
        a=int(request.args.get("gugudan1"))
        b=int(request.args.get("gugudan2"))
        # print(a)
        # print(b)
        (a,b) = (a,b) if a<b else (b,a)
        for i in range(a,b+1):
            # print(i)
            for dan in range(1,10):
                # c=i*dan
                c +=f"{i}*{dan}={i*dan}"
    return render_template('index.html',c=c)


@app.route("/number")
def number():
    d=[]
    f=[]
    # print(request.args.get("number"))
    if request.args.get("number1") !="" and  request.args.get("number2") !="" and\
         request.args.get("number3") !="" and  request.args.get("number4") !="" and\
             request.args.get("number5") !="" and  request.args.get("number6") !="" and\
                 request.args.get("number7") !="" and  request.args.get("number8") !="" and\
                     request.args.get("number9") !="" and  request.args.get("number10") !="":
                    num1=int(request.args.get("number1"))
                    # num2=int(request.args.get("number2"))
                    # num3=int(request.args.get("number3"))
                    # num4=int(request.args.get("number4"))
                    # num5=int(request.args.get("number5"))
                    # num6=int(request.args.get("number6"))
                    # num7=int(request.args.get("number7"))
                    # num8=int(request.args.get("number8"))
                    # num9=int(request.args.get("number9"))
                    # num10=int(request.args.get("number10"))
                    if num1%2==0:
                        d.append([num1])
                    else:
                        f.append([num1])
                    # if num2%2==0:
                    #     d.append([num2])
                    # else:
                    #     f.append([num2])
                    # if num3%2==0:
                    #     d.append([num3])
                    # else:
                    #     f.append([num3])
                    # if num4%2==0:
                    #     d.append([num4])
                    # else:
                    #     f.append([num4])
                    # if num5%2==0:
                    #     d.append([num5])
                    # else:
                    #     f.append([num5])
                    # if num6%2==0:
                    #     d.append([num6])
                    # else:
                    #     f.append([num6])
                    # if num7%2==0:
                    #     d.append([num7])
                    # else:
                    #     f.append([num7])
                    # if num8%2==0:
                    #     d.append([num8])
                    # else:
                    #     f.append([num8])
                    # if num9%2==0:
                    #     d.append([num9])
                    # else:
                    #     f.append([num9])
                    # if num10%2==0:
                    #     d.append([num10])
                    # else:
                    #     f.append([num10])
                    print(d)
                    print(f)    
    return render_template("index.html")

app.run(debug=True)