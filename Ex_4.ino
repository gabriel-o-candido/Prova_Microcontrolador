
   int led [] ={2,6,5,10,11,3,8,9,4,7};
   //           0,1,2,3,4,5,6,7,8,9,10,11}

void setup() {

   for(int x=2; x<=13; x++)
      {
        pinMode(x, OUTPUT);
      }

}

void loop() {

   for(int x=0; x<=11; x++)
      {
        digitalWrite(led[x], 1);
        delay(500);
      }

   delay(2000);

   for(int x=0; x<=11; x++)
      {
        digitalWrite(led[x], 0);
        delay(500);
      }

   delay(500);

}
