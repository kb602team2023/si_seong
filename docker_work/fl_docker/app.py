from flask import Flask

app = Flask(__name__)

@app.route('/')
def hello():
    return 'Hello Flask World'

@app.route('/aa')
def aa():
    return 'aa Flask World'

if __name__ == '__main__':
    app.run(debug=True, host="0.0.0.0")