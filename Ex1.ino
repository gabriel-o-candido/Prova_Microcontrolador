
   bool A,B,X;

void setup() {

   pinMode(2, INPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, OUTPUT);

}

void loop() {

   A=digitalRead(2);
   B=digitalRead(3);
   C=digitalRead(4);
   X=A||!(B&&(!A||c));
   digitalWrite(5,X);

}
