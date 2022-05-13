int Led_Pin = 3;
int Pot_Pin = A0;
int Int_Pin = 2;
int sensorValue = 0;
int outputValue = 0;
int inputValue = 0;
void setup()
{
pinMode(Led_Pin, OUTPUT);
pinMode(Int_Pin, INPUT);
Test_Led();
}
void loop()
{
inputValue = digitalRead(Int_Pin);
if (inputValue == HIGH)
{
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5)
  {
  analogWrite(Led_Pin, fadeValue); 
  delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) 
  {
  analogWrite(Led_Pin, fadeValue);
  delay(30);
  }
}
else
{
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin, outputValue);
}
}
void Test_Led()
{
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
  delay(1000);
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
  delay(1000);
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
}