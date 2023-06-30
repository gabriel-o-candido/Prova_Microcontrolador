   #define tempo 200
   #include <LiquidCrystal.h>
   LiquidCrystal lcd (7,6,5,4,3,2);

   bool botao;

void setup() {

  pinMode(8, INPUT);
  lcd.begin(16,2);

}

void loop() {

   botao=digitalRead(8);

   if(botao==1)
     {
      lcd.clear();
      lcd.setCursor(3,0);
      lcd.print("CH ACIONADA");
     }
     else
     {
      lcd.clear();
      lcd.setCursor(1,0);
      lcd.print("CH DESACIONADA");
     }

}
