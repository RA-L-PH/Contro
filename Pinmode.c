void setup() {
  // put your setup code here, to run once:
  pinMode(0, HIGH);
  pinMode(1, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);

  Serial.print("pin:");
  Serial.println(1);
  Serial.print("status:");
  Serial.print(digitalRead(1));
  delay(2500);

  digitalWrite(1,HIGH);

  Serial.print("pin:");
  Serial.println(1);
  Serial.print("status:");
  Serial.println(digitalRead(1));
  delay(5000);

}
