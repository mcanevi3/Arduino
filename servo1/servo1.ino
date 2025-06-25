#include <Servo.h>  // Servo kütüphanesini dahil et

Servo myservo;  // Servo nesnesi oluştur

void setup() {
  myservo.attach(9);  // Servo sinyal pini olarak dijital 9'u kullan
}

void loop() {
  // 0'dan 180 dereceye kadar dön
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);     // Pozisyonu ayarla
    delay(15);              // Servonun hareket etmesi için kısa bekleme
  }

  // 180'den 0 dereceye geri dön
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}