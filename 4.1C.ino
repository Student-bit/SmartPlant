#define DRY 300

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int SensorValue = analogRead(A0);
  delay(1000);
  Serial.print("Moisture: ");
  Serial.print(SensorValue);

  if(SensorValue <= DRY) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
  }
else{
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}
