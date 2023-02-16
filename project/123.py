
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
    return render_template("weather.html",result1=result1,result=result)




<script>
    const $mysel1 = document.getElementById('my-sel1');
    const $myinput1 = document.getElementById('my-input1');
    const $mydiv1 = document.getElementById('my-div1');
    let selecttext1="";
    
    function cityselect1(){
        selecttext1 = $mysel1.options[$mysel1.selectedIndex].text;
        selectvalue1 = $mysel1.options[$mysel1.selectedIndex].value;
    }
</script>
