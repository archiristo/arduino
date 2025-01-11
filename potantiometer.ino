int redled = 2;
int yellowled = 3;
int orangeled = 4;
int a0_digital= 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(orangeled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  a0_digital=analogRead(A0);
  Serial.println(a0_digital);
  if(a0_digital <= 330){
    digitalWrite(redled, HIGH);
    digitalWrite(yellowled, LOW);
    digitalWrite(orangeled, LOW);
  }
  else if(a0_digital <= 660){
    digitalWrite(redled, LOW);
    digitalWrite(yellowled, HIGH);
    digitalWrite(orangeled, LOW);
  }
  else if(a0_digital <= 990){
    digitalWrite(redled, LOW);
    digitalWrite(yellowled, LOW);
    digitalWrite(orangeled, HIGH);
  }
  else{
    digitalWrite(redled, HIGH);
    digitalWrite(yellowled, HIGH);
    digitalWrite(orangeled, HIGH);
  }
  delay(100);
}
