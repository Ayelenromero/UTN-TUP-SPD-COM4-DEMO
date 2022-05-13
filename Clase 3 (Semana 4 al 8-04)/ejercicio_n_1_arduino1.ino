void setup()
{
  // Configurar Pin como Salida
  pinMode(13,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  //Encender  ambos led
  digitalWrite(13, HIGH);
  digitalWrite(7,HIGH);
  
  // Esperar 1 Segundo 
  delay(1000);
  //apagar primer led, encender el segundo
   digitalWrite(13, LOW);
   digitalWrite(7,HIGH);
  
  delay(1000);
  
  //prnder el primer led, apagar el 2do
   digitalWrite(13, HIGH);
   digitalWrite(7,LOW);
  delay(1000);
}

  