int a;
void setup() {
Serial.begin(9600);
}

void loop() {
if(Serial.available()){
  a = Serial.read();}
analogWrite(11 , a);
delay(1000);
}

