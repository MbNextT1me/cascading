#include <SoftwareSerial.h>
 
SoftwareSerial mySerial(3, 2);
 
void setup()  
{
  Serial.begin(57600);
  while (!Serial) {}
  
  Serial.println("Goodnight moon!");
  mySerial.begin(4800);
  mySerial.println("Hello, world?");
}
 
void loop()
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}