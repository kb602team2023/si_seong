import os
import sys
import urllib.request
from gtts import gTTS
from playsound import playsound
import json
def makePapago(text):
    client_id = "6SVg6aGgPQ9ORQto40fu" # 개발자센터에서 발급받은 Client ID 값
    client_secret = "GVDkKHIXSc" # 개발자센터에서 발급받은 Client Secret 값
    encText = urllib.parse.quote(text)
    data = "source=ko&target=en&text=" + encText
    url = "https://openapi.naver.com/v1/papago/n2mt"
    request = urllib.request.Request(url)
    request.add_header("X-Naver-Client-Id",client_id)
    request.add_header("X-Naver-Client-Secret",client_secret)
    response = urllib.request.urlopen(request, data=data.encode("utf-8"))
    rescode = response.getcode()
    if(rescode==200):
        response_body = response.read()
        res=response_body.decode('utf-8')
        res=json.loads(res)
        text=res['message']['result']['translatedText']
        print(text)
    else:
        print("Error Code:" + rescode)

    tts=gTTS(text=text,lang='ko',slow=True)
    tts.save('230110/static/ex_ko.mp3')



