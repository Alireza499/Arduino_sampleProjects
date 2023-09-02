void setup() {
 
  pinMode(8,OUTPUT); // green
  pinMode(9,OUTPUT); // yellow
  pinMode(10,OUTPUT); // red
}

void loop() {
  //  30 s  green  5 s yellow and 60 s red   
  // for this example we assume that 1s ~= 100ms
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(3000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(6000);
}
