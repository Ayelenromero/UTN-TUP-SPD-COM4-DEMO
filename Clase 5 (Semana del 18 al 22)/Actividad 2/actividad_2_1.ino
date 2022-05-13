int buttonState = 0;
void setup()
{
// Configurar Pin como Entrada
pinMode(2, INPUT);
// Configurar Pines como Salida
pinMode(5, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
// Leer Estado del Puerto de Entrada 2
buttonState = digitalRead(2);
// Actual Segun el Estado de la Lectura
if (buttonState == HIGH){
// Apagar Led en Puerto 5
digitalWrite(5, LOW);
// Encender Led en Puerto 13
digitalWrite(13, HIGH);
// Esperar 1 Segundo
delay(1000);
// Encender Led en Puerto 5
digitalWrite(5, HIGH);
// Apagar Led en Puerto 13
digitalWrite(13, LOW);
// Esperar 1 Segundo
delay(1000);
} else {
// Apagar Leds en Puertos 5 y 13
digitalWrite(5, LOW);
digitalWrite(13, LOW);
}
}

  