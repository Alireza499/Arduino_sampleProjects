#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);
int number;
float volt;
void setup() {
  pinMode(2 , INPUT_PULLUP);
  lcd.begin(16,2);
  attachInterrupt(0, func2, LOW);
}

void loop() {
  number = analogRead(A0);
  if ( ( 5 * (number / 255.0) ) > 7 ){
      volt = 5 * (number / 160.0 );
    }
   else if ( ( 5 * (number / 255.0) ) > 6 ){
      volt = 5 * (number / 180.0 );
    }
   else{
      volt = 5 * (number / 255.0 );
    }
  lcd.setCursor(0,0);
  lcd.print(volt);
  delay(100);
}

void func2(){
   while(digitalRead(2) == 0) {}
   lcd.setCursor(0,0);
   lcd.print("inturrupt eccurd");
   delay(5000);
  }
