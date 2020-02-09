#include <spc_ard_plc.h>
#define SPC_ARD_PLC_A10
SPC_ARD_PLC plc;   // declare plc as SPC_ARD_PLC class and config to use A10 board 

void setup() {
  // ...
}

void loop() {
    // read the input on analog pin 0:
    int sensorValue = analogRead(AN1);
    // print out the value you read:
    Serial.println(sensorValue);
    delay(1); // delay in between reads for stability
}