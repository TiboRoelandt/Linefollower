const int LED = 13;
const int BUTTON = 2;
volatile byte ledState = LOW;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON), blinkLed, RISING);
}
void loop() {
  // nothing here!
}
void blinkLed() {
  ledState = !ledState;
  digitalWrite(LED, ledState);
}