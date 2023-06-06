int a = 111111111; int b = 111111111; int c = 111111110; int d = 111111100; int e = 111111000; 
int f = 111110000; int g = 111100000; int h = 111000000; int i = 110000000; int j = 100000000; int k = 0;
int gap;
int lastgap;

void setup() {
  pinMode(2, INPUT); pinMode(3, INPUT); pinMode(4, INPUT); pinMode(5, INPUT); pinMode(6, INPUT); 
  pinMode(7, INPUT); pinMode(8, INPUT); pinMode(9, INPUT); pinMode(10, INPUT); pinMode(11 , OUTPUT);
  //인체감지 센서 핀 부여
  Serial.begin(9600); //시리얼 통신 시작  
}

void loop() {

  int check1 = 1; int check2 = 1; int check3 = 0; int check4 = 0; int check5 = 0;
  int check6 = 0; int check7 = 0; int check8 = 0; int check9 = 0; 

  int A;
  int myworld(int c1, int c2, int c3,int c4,int c5,int c6,int c7,int c8,int c9 ); //창조

  for (A = 0; A < 10; A++) {
    if (digitalRead(2) == 1) {
      check1++;
    } if (digitalRead(3) == 1) {
      check2++;
    } if (digitalRead(4) == 1) {
      check3++;
    }
    if (digitalRead(5) == 1) {
      check4++;
    } if (digitalRead(6) == 1) {
      check5++;
    } if (digitalRead(7) == 1) {
      check6++;
    }
    if (digitalRead(8) == 1) {
      check7++;
    } if (digitalRead(10) == 1) {
      check8++;
    } if (digitalRead(10) == 1) {
      check9++;
    }
    
    
    delay(600);

  }
  int acheck1 = (check1 > 0) ? 1 : 0;  int acheck2 = (check2 > 0) ? 1 : 0;   int acheck3 = (check3 > 0) ? 1 : 0;
  int acheck4 = (check4 > 0) ? 1 : 0;  int acheck5 = (check5 > 0) ? 1 : 0;   int acheck6 = (check6 > 0) ? 1 : 0;
  int acheck7 = (check7 > 0) ? 1 : 0;  int acheck8 = (check8 > 0) ? 1 : 0;   int acheck9 = (check9 > 0) ? 1 : 0;
  
  gap = 100000000* acheck1+ 10000000* acheck2+ 1000000* acheck3+ 100000* acheck4+ 
        10000* acheck5+ 1000* acheck6+ 100*acheck7+ 10*acheck8+ acheck9;
  myworld(acheck1, acheck2, acheck3, acheck4, acheck5, acheck6, acheck7, acheck8, acheck9); //자리 배정, 출발~~
  if(gap == a){analogWrite(11, 20); lastgap=20;} 
else if(gap == b){analogWrite(11, 13); lastgap=13;}
else if(gap == c){analogWrite(11, 9); lastgap=9;}
else if(gap == d){analogWrite(11, 7); lastgap=7;}
else if(gap == e){analogWrite(11, 6); lastgap=6;}
else if(gap == f){analogWrite(11, 5); lastgap=5;}
else if(gap == g){analogWrite(11, 4); lastgap=4;}
else if(gap == h){analogWrite(11, 3); lastgap=3;}
else if(gap == i){analogWrite(11, 2); lastgap=2;}
else if(gap == j){analogWrite(11, 1); lastgap=1;}
else if(gap == k){analogWrite(11, 0); lastgap=0;}
else {analogWrite(11,lastgap);}
  Serial.println("5s"); delay(1000); Serial.println("4s"); delay(1000);  Serial.println("3s"); delay(1000);
  Serial.println("2s"); delay(1000); Serial.println("1s"); delay(1000);  Serial.println("0s"); delay(1000);
}

int myworld(int c1, int c2, int c3,int c4,int c5,int c6,int c7,int c8,int c9) { 
  Serial.print(c1); Serial.print(c2); Serial.print(c3); Serial.print(c4); Serial.print(c5);
  Serial.print(c6); Serial.print(c7); Serial.print(c8); Serial.print(c9);
 return 0; 
}

