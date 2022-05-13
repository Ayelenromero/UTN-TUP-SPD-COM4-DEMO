int Led_Pin = 13;

int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;


void setup()
{
  // Configurar Pin como Salida
  pinMode(Led_Pin, OUTPUT);
  pinMode(Led_Pin, OUTPUT);
Test_Led();
}

void loop()
{
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(Led_Pin, outputValue);
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
