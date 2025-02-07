#define led1 9
#define led2 10
#define pot A0

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  int potvalue = analogRead(pot);

  int ld1 = map(potvalue, 0, 1023, 0 ,255);
  int ld2 = 255-ld1;

  analogWrite(led1, ld1);
  analogWrite(led2, ld2);

}
