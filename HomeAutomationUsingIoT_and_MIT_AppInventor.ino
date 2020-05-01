#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<Adafruit_SSD1306.h>
#define RESET LED_BUILTIN
Adafruit_SSD1306 oled(RESET);
char token[] = "toDL70GiMsc9SNKPEr-vAvoT9Noybs3C";
char wname[] = "Vegan";
char pass[] = "veganpower";
void setup()
{
  Serial.begin(9600);
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.setTextSize(1);
  oled.setCursor(20, 0);
  oled.print("IoT BASED HOME");
  oled.setCursor(14, 9);
  oled.print("AUTOMATION SYSTEM");
  oled.setTextSize(2);
  oled.setCursor(0, 16);
  oled.print("CONNECTING\nTO WEB\nSERVER");
  oled.setTextSize(1);
  oled.setCursor(80, 44);
  oled.print("OFFLINE");
  oled.display();
  Blynk.begin(token, wname, pass);
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setCursor(20, 0);
  oled.print("IoT BASED HOME");
  oled.setCursor(14, 9);
  oled.print("AUTOMATION SYSTEM");
  oled.setTextSize(2);
  oled.setCursor(0, 16);
  oled.print("CONNECTED\nTO WEB\nSERVER");
  oled.setTextSize(1);
  oled.setCursor(80, 44);
  oled.print("ONLINE");
  oled.display();
}
void loop()
{
  Blynk.run();
}
