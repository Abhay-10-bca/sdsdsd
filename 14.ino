#include <WiFi.h>
#include <ThingSpeak.h>
#include <DHT.h>
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
unsigned long channelNumber = YOUR_CHANNEL_ID;
const char* writeAPIKey = "YOUR_WRITE_API_KEY";
WiFiClient client;
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
Serial.begin(115200);
dht.begin();
WiFi.begin(ssid, password);
Serial.print("Connecting to Wi-Fi");
while (WiFi.status() != WL_CONNECTED)
{
delay(500);
Serial.print(".");
}
Serial.println();
Serial.println("Wi-Fi Connected");
ThingSpeak.begin(client);
}

void loop()
{
float temperature = dht.readTemperature();
float humidity = dht.readHumidity();
if (isnan(temperature) || isnan(humidity))
{
Serial.println("DHT11 Sensor Error");
delay(2000);
return;
}
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println(" °C");
Serial.print("Humidity: ");
Serial.print(humidity);
Serial.println(" %");
ThingSpeak.setField(1, temperature);
ThingSpeak.setField(2, humidity);
int status = ThingSpeak.writeFields(channelNumber, writeAPIKey);
if (status == 200)
Serial.println("Data Uploaded Successfully");
else
Serial.println("Upload Failed");
delay(20000);
}
