#define Led 3

void setup() {
  pinMode(Led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.println(light);
  delay(50);
  if (light > 90){
    digitalWrite(Led,LOW);
  }
  if(light < 85){
    digitalWrite(Led,HIGH);
  }
}
