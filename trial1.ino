#define led1 3
#define led2 2 


void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(500);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(500);
}
