#include "EasyLoRaNode.h"

void setup() {  
  setupSerial();
  setupLED();
  setupSpeaker();
  //setupButton();
  setupWiFi();
  delay(1000);
  setupOTA();
  setupLoRa();
  onSpeaker();
  delay(500);
  offSpeaker();
}

void loop() {
  onLED_GREEN();
  delay(100);
  offLED_GREEN();
  onLED_BLUE();
  delay(100);
  offLED_BLUE();
  delay(100);

  sendLoRaMessage("Hello Easy LoRa Node");
  //onSpeaker();
  //delay(500);
  //offSpeaker();
  //delay(500);
 
  //buttonPressed();
  waitingForOTA();
}
