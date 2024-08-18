const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
char receiveVal; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)  
  {          
    receiveVal = Serial.read();   

    switch(receiveVal){
      case '1':
        digitalWrite(led1, !digitalRead(led1));
        Serial.println("led 1 " + String(digitalRead(led1)? "On": "Off"));
        break;
      case '2':
        digitalWrite(led2, !digitalRead(led2));
        Serial.println("led 2 " + String(digitalRead(led2)? "On": "Off"));
        break;
      case '3':
        digitalWrite(led3, !digitalRead(led3));
        Serial.println("led 3 " + String(digitalRead(led3)? "On": "Off"));
        break;
      default:
        Serial.println("Device Not Found...");
        break;
    }     
  }     
      
  
}
