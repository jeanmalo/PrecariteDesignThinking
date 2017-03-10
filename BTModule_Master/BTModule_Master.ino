//SLAVE
//+ADDR:98d3:36:bee3
//MASTER 1421 Droite
//+ADDR:98d3:36:bc12

#include <SoftwareSerial.h>
SoftwareSerial BTS(10,11); // Rx ! Tx

String photomess = "Je ne vois plus rien";

void setup() {
 Serial.begin(38400);
 BTS.begin(38400);
 pinMode(12, OUTPUT);
 pinMode(A0, INPUT);
 Serial.print("Bonjour Maitre JM \n");
 
}

void loop() {
  digitalWrite(12, LOW);
 int sensorValue = analogRead(A0);
 Serial.print(sensorValue);
 Serial.print("\n");
 
 if (sensorValue<100){
  BTS.print(42);
  digitalWrite(12, HIGH);
 }else{
  //BTS.write("photomess");
 }
 delay(1000);
 /*BTS.flush(); 
 digitalWrite(12, LOW);
 delay(1000);
 
 BTS.print("10");

 digitalWrite(12, HIGH);
 delay(5000);
 */
 BTS.flush();
}
