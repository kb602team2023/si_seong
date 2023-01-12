from flask import Flask,render_template,request,redirect,url_for


app=Flask(__name__)

# @app.route("/")
# def index():
#     print(request.args.get('first'))
#     print(request.args.get('second'))
#     print(request.args.get('calcu'))
#     a=request.args.get('first')
#     b=request.args.get('second')
#     c=request.args.get('calcu')
#     c=str(c)
#     if c==1:
#         d=int(a)+int(b)
#     elif c==2:
#         d=int(a)-int(b)
#     elif c==3:
#         d=int(a)*int(b)
#     elif c==4:
#         d=int(a)/int(b)
#     elif c==5:
#         d=int(a)%int(b)

#     return render_template('index.html')

@app.route("/")
def random():
    import random
    a=random.randint(1,100)
    return render_template('random.html',a=a)





app.run(debug=True)