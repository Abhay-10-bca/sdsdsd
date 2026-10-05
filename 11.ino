#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(115200);
dht.begin();

Serial.println("DHT22 Monitoring Started");
}

void loop() {

float humidity = dht.readHumidity();
float temperature = dht.readTemperature();

if (isnan(humidity) || isnan(temperature)) {
Serial.println("Failed to read DHT22");
return;
}

Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println(" °C");

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.println(" %");

delay(2000);
}
