void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void loop() {
//  for (int fadeV = 0; fadeV <= 255; fadeV += 5)
//  {
//   Serial.print("Fade Value = ");
//    Serial.println(fadeV);
//    analogWrite(0,fadeV);
//    delay(50);
//  }
//
//   for (int fadeV = 255; fadeV >= 0; fadeV -= 5)
//  {
//    Serial.print("Fade Value = ");
//    Serial.println(fadeV);
//    analogWrite(0,fadeV);
//    delay(50);
//  }

  int potValue = analogRead(A0);
  int brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(9, brightness);
  Serial.print("Pot Value (A0) = ");
  Serial.println(potValue);
  Serial.print("Brightness Value (pin 9) = ");
  Serial.println(brightness);
  delay(500);
//
//  int sensorV = analogRead(A0);
//
//  Serial.println("Sensor Reading: ");
//  Serial.println(sensorV);
//  delay(50);

}
