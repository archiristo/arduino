int ledarray[] = {2, 3, 4, 5, 6, 7};
void setup(){
  for (int i = 0; i < 6; i++){
    pinMode(ledarray[i], OUTPUT);
  }
}

void loop(){
  for (int i = 0; i < 6; i++){
    pinMode(ledarray[i], HIGH);
    delay(100);
    pinMode(ledarray[i], LOW);
  }
  for (int j = 5; j > -1; j--){
    pinMode(ledarray[j], HIGH);
    delay(100);
    pinMode(ledarray[j], LOW);
  }
}
