
   #include <LiquidCrystal.h>
   LiquidCrystal lcd (7,6,5,4,3,2);
   #define tempo 200

void setup() {

  lcd.begin(16,2);
  lcd.setCursor(5,0);
  lcd.print("PROVA 1");
  lcd.setCursor(0,1);
  lcd.print("MICROCONTROLADOR");
  delay(5000);
  lcd.clear();

}

void loop() {

   lcd.setCursor(4,0);
   lcd.print("QUESTAO 3");
   delay(tempo);

   for(int x=0; x<=3; x++)
      {
        lcd.scrollDisplayLeft();
        delay(400);
      }

   lcd.clear();
   delay(tempo);

   lcd.setCursor(4,1);
   lcd.print("QUESTAO 3");
   delay(tempo);

   for(int x=0; x<=2; x++)
      {
        lcd.scrollDisplayRight();
        delay(400);
      }
   delay(tempo);
   lcd.clear();
   delay(tempo);
  
}
