int trigpin = 9;
int echopin = 10;
int grey = 6;
long t;
long d;

void setup(){
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(grey, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  t = pulseIn(echopin, HIGH);
  d = t/2/29.154;
  
  Serial.println("Signal moved for: ");
  Serial.println(t);
  Serial.println("Length: ");
  Serial.println(d);
  
  delay(500);
  
  if(d <= 80){
    digitalWrite(grey, HIGH);
    Serial.print("Light turned on.");}
  else{
    digitalWrite(grey, LOW);
    Serial.print("Light turned off.");
  
  }

}
