int pinnum[10] = {2,3,4,5,6,7,8,9,10,12};
int state[10][10] = {{1,0,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,1,0,0,0,0,0,0,0},
                    {1,1,1,1,0,0,0,0,0,0},
                    {1,1,1,1,1,0,0,0,0,0},
                    {1,1,1,1,1,1,0,0,0,0},
                    {1,1,1,1,1,1,1,0,0,0},
                    {1,1,1,1,1,1,1,1,0,0},
                    {1,1,1,1,1,1,1,1,1,0}, 
                    {1,1,1,1,1,1,1,1,1,1}
};

void setup() {
Serial.begin(9600);
pinMode(2, OUTPUT); pinMode(3, OUTPUT); pinMode(4, OUTPUT); pinMode(5, OUTPUT); pinMode(6, OUTPUT);
pinMode(7, OUTPUT); pinMode(8, OUTPUT); pinMode(9, OUTPUT); pinMode(10, OUTPUT); pinMode(11, OUTPUT); pinMode(12 , OUTPUT); //삭제
}

void loop() {
int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11;  
if(Serial.available()>0){
int a = Serial.parseInt(); analogWrite(11, a);}

for( int b = 1; b<12; b++){
  switch(b)
 {case 1: p1 = analogRead(A1); delay(500);
  break;
  case 2: p2 = analogRead(A1); delay(500);
  break; 
  case 3: p3 = analogRead(A1); delay(500);
  break; 
  case 4: p4 = analogRead(A1); delay(500);
  break; 
  case 5: p5 = analogRead(A1); delay(500);
  break; 
  case 6: p6 = analogRead(A1); delay(500);
  break; 
  case 7: p7 = analogRead(A1); delay(500);
  break; 
  case 8: p8 = analogRead(A1); delay(500);
  break; 
  case 9: p9 = analogRead(A1); delay(500);
  break; 
  case 10: p10 = analogRead(A1); delay(500);
  break; 
  case 11: p11 = (p1+p2+p3+p4+p5+p6+p7+p8+p9+p10)/10;
  break; }
}
if(145 <= p11 & p11 <= 155){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[i][0]);}}
if(230 <= p11 & p11 <= 245){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[1][i]);}}
if(280 <= p11 & p11 <= 310){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[2][i]);}}
if(335 <= p11 & p11 <= 350){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[3][i]);}}
if(370 <= p11 & p11 <= 390){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[4][i]);}}                           
if(400 <= p11 & p11 <= 425){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[5][i]);}}
if(430 <= p11 & p11 <= 455){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[6][i]);}}
if(470 <= p11 & p11 <= 500){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[7][i]);}}
if(535 <= p11 & p11 <= 565){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[8][i]);}}
if(610 <= p11 & p11 <= 635){  for(int i = 0; i< 10; i++){
                            digitalWrite(pinnum[i] , state[9][i]);}}
if(p11==0){ for(int i = 2; i< 13; i++){digitalWrite(i , 0);}}
Serial.println(p11);

delay(1000);
}
