const int IN1 = 10;
const int IN2 = 9;
const int IN3 = 6;
const int IN4 = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Motors voorwaarts
  digitalWrite(IN1,HIGH); 
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH); 
  digitalWrite(IN4,LOW);
  delay(5000);

  //Stop voor 1 seconde
  digitalWrite(IN1,LOW); 
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW); 
  digitalWrite(IN4,LOW);
  delay(1000);

  //Motors achterwaarts
  digitalWrite(IN1,LOW); 
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW); 
  digitalWrite(IN4,HIGH);
  delay(5000);

  //Stop voor 1 seconde
  digitalWrite(IN1,LOW); 
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW); 
  digitalWrite(IN4,LOW);
  delay(1000);
}
