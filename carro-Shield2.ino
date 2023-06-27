int inE1 = 9;
int inE2 = 10;
int inD1 = 11;
int inD2 = 12;


void setup() {
  // put your setup code here, to run once:

  pinMode(inE1, OUTPUT);
  pinMode(inE2, OUTPUT);
  pinMode(inD1, OUTPUT);
  pinMode(inD2, OUTPUT);

  delay(3000);

}

void loop() {
  
  digitalWrite(inE1, HIGH);
  digitalWrite(inE2, LOW);
  digitalWrite(inD1, LOW);
  digitalWrite(inD2, HIGH);
  delay(1500);
  digitalWrite(inD1, HIGH);
  digitalWrite(inD2, HIGH);
  delay(900);
 

}
