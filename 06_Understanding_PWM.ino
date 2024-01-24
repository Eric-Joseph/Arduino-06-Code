int LED = 9;
int offTime = 1;
int onTime = 9;
// Used to test different outputs. Not definite code to reference
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(onTime);
  digitalWrite(LED, LOW);
  delay(offTime);
}
