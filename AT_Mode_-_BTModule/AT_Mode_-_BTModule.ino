//SLAVE
//+ADDR:98d3:36:bee3
//MASTER
//+ADDR:98d3:36:bc12

 
#include <SoftwareSerial.h>
 
SoftwareSerial BTS(10, 11); // RX | TX
 
void setup()
{
  Serial.begin(9600);
  Serial.print("Enter AT commands:");
  BTS.begin(38400);  // HC-05 FC-114 default speed in AT command more
}
 
void loop()
{
 
  // Read from HC-05 and send it to Arduino Serial Monitor
  if (BTS.available())
  {
    Serial.write(BTS.read());
  }
 
  // Read from Arduino Serial Monitor and send to HC-05
  if (Serial.available())
    BTS.write(Serial.read());
}
