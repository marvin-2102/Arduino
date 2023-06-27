int inE1 = 8;
int inE2 = 9;
int inD1 = 10;
int inD2 = 11;
  
void setup()
{
  
 pinMode(inE1, OUTPUT);
 pinMode(inE2, OUTPUT);
 pinMode(inD1, OUTPUT);
 pinMode(inD2, OUTPUT);

}
  
void loop()
{
 
 digitalWrite(inE1, HIGH);
 digitalWrite(inE2, LOW);
 delay(2000);
 
 digitalWrite(inE1, HIGH);
 digitalWrite(inE2, HIGH);
 delay(500);
 
 digitalWrite(inD1, HIGH);
 digitalWrite(inD2, LOW);
 delay(2000);
 
 digitalWrite(inD1, HIGH);
 digitalWrite(inD2, HIGH);
 delay(500);
 
 
 digitalWrite(inE1, LOW);
 digitalWrite(inE2, HIGH);
 delay(2000);
 
 digitalWrite(inE1, HIGH);
 digitalWrite(inE2, HIGH);
 delay(500);
 
 digitalWrite(inD1, LOW);
 digitalWrite(inD2, HIGH);
 delay(2000);
 
 digitalWrite(inD1, HIGH);
 digitalWrite(inD2, HIGH);
 delay(500);


}