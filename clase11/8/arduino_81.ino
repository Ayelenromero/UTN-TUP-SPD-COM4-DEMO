// Liberia para LCD
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;
void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("Sistema");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("Sistema");
  delay(1000);
  lcd.clear();
  lcd.print("Contando Numeros");
  lcd.setCursor(0, 1);
  lcd.print("Valor:");
}
void loop() 
{
  lcd.setCursor(7, 1);
  lcd.print(contador);
  contador++;
  delay(1000);
}