void setup()  {
  Serial.begin(9600);
  pinMode(D3, OUTPUT);
  pinMode(D5, INPUT);
}
void loop()  {
  if (digitalRead(D5) == 0) {
    digitalWrite(D3, 0);
    Serial.println("LOW");
  }
  else {
    digitalWrite(D3, 1);
    Serial.println("HIGH");
  }
  delay(200);
}
