int gpin = 11;// green pin
int ypin = 12;// yellow pin
int rpin = 13;// red pin

int d10 = 1000;// 1 seconds
int d5 = 3000;// 3 seconds

void setup() {
  // put your setup code here, to run once:
pinMode(gpin,OUTPUT);// GREEN
pinMode(ypin,OUTPUT);// YELLOW
pinMode(rpin,OUTPUT);// RED
}

void loop() {
  //GREEN
digitalWrite(gpin,HIGH);// turn on green
delay(d10);// green for 1s
digitalWrite(gpin,LOW);// turn off green
  
  //YELLOW
digitalWrite(ypin,HIGH);// turn on yellow
delay(d5);// yellow for 5s
digitalWrite(ypin,LOW);// turn off yellow

  //RED
digitalWrite(rpin,HIGH);// turn on red
delay(d10);// red for 10s
digitalWrite(rpin,LOW);// turn off red

  //YELLOW
digitalWrite(ypin,HIGH);// turn on yellow
delay(d5);// yellow for 5s
digitalWrite(ypin,LOW);// turn off yellow
}
