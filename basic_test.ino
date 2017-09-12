/* L9110 Fan Module (L9110) [D086] : http://rdiot.tistory.com/322 [RDIoT Demo] */

int INA = 9; 
int INB = 8; 

void setup() 
{ 
  pinMode(INA,OUTPUT); 
  pinMode(INB,OUTPUT); 
} 
void loop() 
{ 
  // LEFT
  digitalWrite(INA,LOW);
  digitalWrite(INB,HIGH); 
  delay(1000); 
  
  digitalWrite(INA,LOW);
  digitalWrite(INB,LOW); 
  delay(3000); 

  // RIGHT
  digitalWrite(INA,HIGH);
  digitalWrite(INB,LOW); 
  delay(1000); 

  digitalWrite(INA,LOW);
  digitalWrite(INB,LOW); 
  delay(3000); 
}
