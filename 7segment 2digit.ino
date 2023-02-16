//start with variable value, from int to pin
int pinA = 1;
int pinB = 2;
int pinC = 3;
int pinD = 4;
int pinE = 5;
int pinF = 6;
int pinG = 7;
int Anode1 = 12;
int Anode2 = 13;
void digit1 (int w);
void digit2 (int x);
unsigned long int counter;
int sec0;  
int sec1;  
int ON = HIGH; 
int OFF = LOW;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(Anode1, OUTPUT);
  pinMode(Anode2, OUTPUT);
}
void loop(){
  if (counter >= 1000);
    {
      counter = 0;
      sec0 = sec0 + 1;
    
   if (sec0 == 10);
    {
    sec0 = 0;
    sec1 = sec1 + 1;
    if (sec1 == 10);
      sec1 = 0;
    }
  }
  digit1(sec1);
  delay(3);
  digit2(sec0);
  delay(3);
  counter = counter + 6;
}
void digit1 (int w){
  digitalWrite(Anode1, OFF);
  digitalWrite(Anode2, ON);
  for (int w = 0; w < 9; w++){ //
    switch (w){
      case 0:
        digitalWrite(pinA, ON);
        digitalWrite(pinB, ON);
        digitalWrite(pinC, ON);
        digitalWrite(pinD, ON);
        digitalWrite(pinE, ON);
        digitalWrite(pinF, ON);
        digitalWrite(pinG, OFF);
        delay(1000);
        break;
      case 1:
        digitalWrite(pinA , OFF);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , OFF);
        delay(1000);
        break;
      case 2: 
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , OFF);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 3:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 4:
        digitalWrite(pinA , OFF);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 5:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , OFF);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
         break;   
      case 6:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , OFF);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 7:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , OFF);
        delay(1000);
        break;
      case 8:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 9:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
    }
  } 
}
void digit2 (int x){
  digitalWrite(Anode1, ON);
  digitalWrite(Anode2, OFF);
  for (int w = 0; w < 9; w++){
    switch (x){
      case 0:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , OFF);
        delay(1000);
        break;
      case 1:
        digitalWrite(pinA , OFF);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , OFF);
        delay(1000);
        break;
      case 2: 
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , OFF);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 3:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 4:
        digitalWrite(pinA , OFF);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 5:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , OFF);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 6:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , OFF);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 7:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , OFF);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , OFF);
        digitalWrite(pinG , OFF);
        delay(1000);
        break;
      case 8:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , ON);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
      case 9:
        digitalWrite(pinA , ON);
        digitalWrite(pinB , ON);
        digitalWrite(pinC , ON);
        digitalWrite(pinD , ON);
        digitalWrite(pinE , OFF);
        digitalWrite(pinF , ON);
        digitalWrite(pinG , ON);
        delay(1000);
        break;
    }
  }
}