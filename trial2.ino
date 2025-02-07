#define led1 3
#define led2 2 
#define buton 4
#define buzzer 5

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buton, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  if(buton, HIGH){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  if(buton, LOW){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(buzzer, LOW);
  }
}
