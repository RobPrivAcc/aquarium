  /******  VARIABLES  *****/
  const int pumpMain = 0;
  const int pumpAlt = 0;
  const int lampMain1 = 0;
  const int lampMain2 = 0;
  const int CO2 = 0;
  const int feedingBtn = 0;
  const int feedingTime = 5;
  

void setup() {
  // put your setup code here, to run once:
  pinMode(pumpMain, OUTPUT);
  pinMode(pumpAlt, OUTPUT);
  pinMode(lampMain1, OUTPUT);
  pinMode(lampMain2, OUTPUT);
  pinMode(CO2, OUTPUT);
  pinMode(feedingBtn, INPUT);
  
}

void morningStart(){
  digitalWrite(lampMain1, HIGH);
  digitalWrite(lampMain2, HIGH);
  digitalWrite(CO2, HIGH);
  }

void evningStop(){
  digitalWrite(lampMain1, LOW);
  digitalWrite(lampMain2, LOW);
  digitalWrite(CO2, LOW);
  }

void feedingStart(){
  digitalWrite(pumpMain, LOW);
  digitalWrite(pumpAlt, LOW);
  }

void feedingEnd(){
  digitalWrite(pumpMain, HIGH);
  digitalWrite(pumpAlt, HIGH);
  }  

void loop() {
  // put your main code here, to run repeatedly:

}
