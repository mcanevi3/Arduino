#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// OLED ekran nesnesi tanımı (I2C adres genelde 0x3C)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void setup() {
  Serial.begin(9600);
  Serial.println(F("Başlatıldı...."));

  // Ekranı başlat
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 başlatılamadı!"));
    while (true);
  }

  display.clearDisplay();               // Ekranı temizle
  display.setTextSize(1);              // Yazı boyutu (1 küçük, 2 büyük)
  display.setTextColor(SSD1306_WHITE); // Beyaz yazı
  display.setCursor(0, 0);             // Ekranın sol üst köşesi
  display.println("Mehmet"); // Yazı yaz
  display.display();    
}

void loop() {
  // display.fillScreen(SSD1306_WHITE);  // TÜM ekranı beyaz yap
  // display.display();  
  // delay(1000);
  // display.clearDisplay();
  // display.display();  
  // delay(1000);


}
