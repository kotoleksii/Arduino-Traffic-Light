#include <IRremote.h>

const int IR_RECEIVER_PIN = 8;
const int LED_PIN = 11;
IRrecv infraredReceiver(IR_RECEIVER_PIN);

void setup()
{
  Serial.begin(9600);
  infraredReceiver.begin(IR_RECEIVER_PIN);
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop()
{
  if(infraredReceiver.decode()) {
    unsigned long signalCode =
      infraredReceiver.decodedIRData.decodedRawData;
    
    if(signalCode !=0 && signalCode != 0xFFFFFFFF) {
      Serial.print("Decoded Data: ");
      Serial.println(signalCode, HEX);
    }
    
    if(signalCode == 0xBA45FF00) {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED turned ON");
      delay(50);
    }  else {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED turned OFF");
      delay(50);
    }
    
    infraredReceiver.resume();
  }
}