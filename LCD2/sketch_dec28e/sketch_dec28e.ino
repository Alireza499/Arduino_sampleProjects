#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);
int number = 0;
void setup() {
  pinMode(7 , INPUT_PULLUP);
  pinMode(6 , INPUT_PULLUP);
  lcd.begin(16,2);
  lcd.print(number);
}

void loop() {
  if(digitalRead(7) == 0){
      while(digitalRead(7) == 0){}
      lcd.clear();
      number++;
      lcd.print(number);
    }

  if(digitalRead(6) == 0){
       while(digitalRead(6) == 0){}
       lcd.clear();
       number--;
       lcd.print(number);
    }
}
