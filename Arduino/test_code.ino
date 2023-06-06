void setup() {
Serial.begin(9600);
}

void loop() {
    
  int a = analogRead(a1);
  Serial.println(a);
 delay(1000); 

}
