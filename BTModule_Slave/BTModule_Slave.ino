//SLAVE 1411 Gauche
//+ADDR:98d3:36:bee3
//MASTER 1421 Droite
//+ADDR:98d3:36:bc12

#include <SoftwareSerial.h>
SoftwareSerial BTS(10,11); // Rx ! Tx [For the bluetooth board]
int incomingByte = 0;

void setup() {
 Serial.begin(38400);
 BTS.begin(38400);
 Serial.print("Let's begin! \n");
 pinMode(12, OUTPUT);
 pinMode(8, OUTPUT);
 digitalWrite(12, LOW);
}

void loop() {d§'("a
  
 if (BTS.available()>0){

   //digitalWrite(12, HIGH);
   
   Serial.print("I received: ");
   incomingByte=BTS.read();
   //incomingByte=BTS.parseInt();
   Serial.println(incomingByte);
   Serial.print("HEX");
   Serial.println(incomingByte,HEX);
   Serial.print("DEC");
   Serial.println(incomingByte,DEC);
   Serial.print("OCT");
    Serial.println(incomingByte,OCT);
   delay(5);
   // Serial.print("\n");
   
   /*if (Serial.write(incomingByte)=="1"){
   Serial.print("what should be received.");
      digitalWrite(12, HIGH);
   }else{
   Serial.print("something weird");
    digitalWrite(12, LOW);
   }*/
   
   //digitalWrite(8,HIGH);
 }else{
  Serial.print("Je ne recois rien. \n");
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
 }

 delay(1000);
}
