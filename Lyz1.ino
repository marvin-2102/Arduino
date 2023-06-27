#include <Servo.h>


#define led_vermelho 2
#define led_azul 3
#define led_amarelo 4
#define pot_vermelho A5
#define pot_azul A4
#define pot_amarelo A3
#define servo A2

int posicao = 0;

Servo prisma; 

void setup()
{
  pinMode(led_vermelho,OUTPUT);
  pinMode(pot_vermelho,INPUT);
  
  pinMode(led_azul,OUTPUT);
  pinMode(pot_azul,INPUT);
  
  pinMode(led_amarelo,OUTPUT);
  pinMode(pot_amarelo,INPUT);
  
  int valor_pot = 0;
  Serial.begin(9600);
  
   	prisma.attach(servo);
 	prisma.write(0);
  
}

void loop()
{
	
 	int valor_pot_ver = analogRead(pot_vermelho);
 	Serial.println(valor_pot_ver);
  	delay(50);
  
    	
 	int valor_pot_ama = analogRead(pot_amarelo);
 	Serial.println(valor_pot_ama);
  	delay(50);
  
    	
   int valor_pot_ass = analogRead(pot_azul);
   Serial.println(valor_pot_ama);
   delay(50);
  
  
  if(valor_pot_ver< 500 && valor_pot_ass<500 && valor_pot_ama <500)
  {
    prisma.write(270);//preto
    digitalWrite(led_vermelho, 0);
    digitalWrite(led_amarelo, 0);
    digitalWrite(led_azul, 0);
    delay(20);
  }else if(valor_pot_ver>=500 && valor_pot_ass>=500 && valor_pot_ama>=500)
  {
    prisma.write(90); //deu certo branco
    digitalWrite(led_vermelho, 1);
    digitalWrite(led_amarelo, 1);
    digitalWrite(led_azul, 1);
    delay(20);
  }else if(valor_pot_ver>=500 && valor_pot_ass<500 && valor_pot_ama<500)
  {
  	prisma.write(0);//vermelho
    digitalWrite(led_vermelho,1);
    digitalWrite(led_amarelo, 0);
    digitalWrite(led_azul, 0);
  }else if(valor_pot_ver>=500 && valor_pot_ass>=500 && valor_pot_ama<500)
  {
  	prisma.write(210); //roxo
    digitalWrite(led_vermelho, 1);
    digitalWrite(led_amarelo, 0);
    digitalWrite(led_azul, 1);
  }else if(valor_pot_ver>=500 && valor_pot_ass<500 && valor_pot_ama>=500)
  {
  	prisma.write(0);// deu certo laranja
    digitalWrite(led_vermelho,1);
    digitalWrite(led_amarelo, 1);
    digitalWrite(led_azul, 0);
  }else if(valor_pot_ver<500 && valor_pot_ass<500 && valor_pot_ama>=500)
  {
  	prisma.write(50); // deu certo amarelo
    digitalWrite(led_vermelho,0);
    digitalWrite(led_amarelo, 1);
    digitalWrite(led_azul, 0);
  }else if(valor_pot_ver<500 && valor_pot_ass>=500 && valor_pot_ama>=500)
  {
  	prisma.write(120);// deu certo verde
    digitalWrite(led_vermelho,0);
    digitalWrite(led_amarelo, 1);
    digitalWrite(led_azul, 1);
  }else if(valor_pot_ver<500 && valor_pot_ass>=500 && valor_pot_ama<500)
  {
  	prisma.write(180);// deu certo azul
    digitalWrite(led_vermelho,0);
    digitalWrite(led_amarelo, 0);
    digitalWrite(led_azul, 1);
  }
  
  /*if(valor_pot_ver <500){
    digitalWrite(led_vermelho, 0);
  }else if(valor_pot_ver >= 500){
    digitalWrite(led_vermelho, 1);
	}
  
  	
 	int valor_pot_ama = analogRead(pot_amarelo);
 	Serial.println(valor_pot_ama);
  	delay(50);
  
   if(valor_pot_ama <500){
    digitalWrite(led_amarelo, 0);
  }else if(valor_pot_ama >= 500){
    digitalWrite(led_amarelo, 1);
	}
  
  	
   int valor_pot_ass = analogRead(pot_azul);
   Serial.println(valor_pot_ama);
   delay(50);
  
   if(valor_pot_ass <500){
    digitalWrite(led_azul, 0);
  }else if(valor_pot_ass >= 500){
    digitalWrite(led_azul, 1);
	}
    */
  


}