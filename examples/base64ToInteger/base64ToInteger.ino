#include <base64_conversion.h>
/*
    This Example illustrates printing decimal numbers from Base64 Characters
    Created by Hiloliddin Jaloliddinzoda 05/05/2021
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

bool printed = false;

void loop() {
  if (!printed) {
    printed = true;
    
    for (int i = 0; i < 64; i++) {
      Serial.println(base64ToDecimal(decimalToBase64(i)));
      delay(10);
    }
    Serial.println("Finished");
  }
}
