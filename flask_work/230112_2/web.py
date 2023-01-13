from flask import Flask, render_template,request
import random

app=Flask(__name__)

@app.route("/")
def index():
    return render_template('index.html')

@app.route("/game")
def game():
    print(request.args.get('game'))
    print(request.args.get('game2'))
    return render_template('game.html')

app.run(debug=True)