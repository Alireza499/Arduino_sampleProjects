#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);

void setup() {
  pinMode(7 , INPUT_PULLUP);
  pinMode(6 , INPUT_PULLUP);

  lcd.begin(16,2);

  lcd.print("started");

  
}

void loop() {
  if(digitalRead(7) == 0){
      while(digitalRead(7) == 0){}
      lcd.clear();
      lcd.print("first button");
    }

  if(digitalRead(6) == 0){
      while(digitalRead(6) == 0){}
      lcd.clear();
      lcd.print("second button");
    }

}
