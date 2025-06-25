#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C taranıyor...");
  for (byte address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    if (Wire.endTransmission() == 0) {
      Serial.print("Cihaz bulundu: 0x");
      Serial.println(address, HEX);
      delay(100);
    }
  }
  Serial.println("Tarama tamamlandı.");
}

void loop() {}