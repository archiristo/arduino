#define Led1 3
#define Led2 5

void setup() {
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.println(light);
  delay(50);
  if (light > 90){
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,LOW);
  }
  else{
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
  }
}
