void setup() {
  pinMode(7 , INPUT_PULLUP);
  pinMode(9 , INPUT_PULLUP);
  pinMode(6 , OUTPUT);
  pinMode(8 , OUTPUT);
}

void loop() {
  if(digitalRead(7) == 0){
    while(digitalRead(7) == 0){}
    digitalWrite(6 , LOW);
    digitalWrite(8 , HIGH);
    }

  if(digitalRead(9) == 0){
    while(digitalRead(9) == 0){}
    digitalWrite(8 , LOW);
    digitalWrite(6 , HIGH);
    }

}
