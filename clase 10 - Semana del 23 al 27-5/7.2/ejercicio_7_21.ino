#include <IRremote.h>

int RECV_PIN = 14;
int IRData = 0;
int Led_Pin = 9;
int Led_Status = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  pinMode(Led_Pin, OUTPUT);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results))
  {
    // Mostrar Lectura
    IRData = results.value;
    irrecv.resume();
    Serial.print("Datos: ");
    Serial.print(IRData, HEX);
    Serial.print(" {");
    Serial.print(IRData);
    Serial.println("}");

    // Controlar Led
    if (IRData == 255)
    {
      if (Led_Status == 0)
      {
        digitalWrite(Led_Pin, 1);
        Led_Status = 1;
      }
      else
      {
        digitalWrite(Led_Pin, 0);
        Led_Status = 0;
      }
    }
  }
}