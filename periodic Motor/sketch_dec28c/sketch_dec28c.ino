
int stepp = 255 / 5 ;
int i = 0;

void setup() {
  pinMode(7 , INPUT_PULLUP);

  pinMode(6 , OUTPUT);


  
 
}

void loop() {
  if(digitalRead(7) == 0){
    while(digitalRead(7) == 0){}
    i = i + stepp;
    if (i > 255){
      
      i = 0;
      }
    
    analogWrite(6 , i);
    
    }
  
}
