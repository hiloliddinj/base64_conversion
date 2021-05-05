#include <base64_conversion.h>
/* 
 *  This Example illustrates printing base 64 Characters from decimal numbers
 *  Created by Hiloliddin Jaloliddinzoda 05/05/2021
 */
 
void setup() {
  Serial.begin(9600);
}

bool printed = false;

void loop() {
  if (!printed) {
    printed = true;

    for (int i = 0; i < 64; i++) {
      Serial.println(decimalToBase64(i));
      delay(10);
    }
    Serial.println("Finished");
  }
}
