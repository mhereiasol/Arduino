int redPin = 7;
int greenPin = 8;
int bluePin =9;

void setup() {
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
setColor(0,255,255);//cyan
delay(1000);
setColor(175,238,238);//pale turquoise 
delay(1000);
setColor(176,196,222);//light steel blue
delay(1000);
setColor(138,43,226);//blue violet
delay(1000);
setColor(135,206,235);//sky blue
delay(1000);
setColor(188,143,143);//rosy brown
delay(1000);
setColor(210,105,30);//chocolate
delay(1000);
setColor(205,133,63);//peru
delay(1000);
setColor(128,0,0);//maroon
delay(1000);
setColor(255,127,80);//coral
delay(1000);
setColor(255,165,0);//orange
delay(1000);
setColor(189,183,107);//dark khaki
delay(1000);
setColor(50,205,50);//lime green
delay(1000);
setColor(32,178,170);//light sea green
delay(1000);
setColor(220,20,60);//crimson
delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}


