const int LED = 3;
const int BUTTON = 2;
bool running;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON), blinkLed, RISING);
  Serial.begin(9600);
}
void loop() {
  // nothing here!
}
void blinkLed() {
  if (running)
  {
    digitalWrite(LED,HIGH);
    running = false;
  }
  else 
  {
    digitalWrite(LED, LOW);
    running = true;
  }
}
