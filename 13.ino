#define BLYNK_TEMPLATE_ID "TMPL31XXgFINJ"
#define BLYNK_TEMPLATE_NAME "ESP32 Device Control"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
#define LED 25
#define BUZZER 27
BLYNK_WRITE(V0) { digitalWrite(LED, param.asInt()); }
BLYNK_WRITE(V1) { digitalWrite(BUZZER, param.asInt()); }
void setup() {
pinMode(LED, OUTPUT);
pinMode(BUZZER, OUTPUT);
digitalWrite(LED, LOW);
digitalWrite(BUZZER, LOW);
Serial.begin(115200);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
void loop() { Blynk.run(); }
