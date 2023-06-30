
   bool ledA;
   bool ledB;

void setup() {

   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);

}

void loop() {

  ledA=digitalRead(2);
  ledB=digitalRead(3);

 if(ledA==0)
   {
    digitalWrite(4, 1);
   }
   else
   {
    digitalWrite(4,0);
   }

 if(ledB==0)
   {
    digitalWrite(5,1);
   }
   else
   {
    digitalWrite(5,0);
   }

}
