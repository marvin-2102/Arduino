 //TECHATRONIC.COM  
 #include <Servo.h> // servo library  


Servo Will;  
 
void setup()  
 {   

  will.attach(D3);  // servo attach D3 pin of arduino  
  will.write(0);

 }  
 
 
void loop()   
 {  
   
  will.write(0);  
  delay(1000);
  will.write(180);  
  delay(1000);  

 }  
