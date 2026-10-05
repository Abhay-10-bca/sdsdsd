#define PIR 15
#define LED 14
void setup()
{
pinMode(PIR, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(115200);
}
void loop()
{
int motion = digitalRead(PIR);
if (motion == HIGH)
{
digitalWrite(LED, HIGH);
Serial.println("Motion Detected");
}
else
{
digitalWrite(LED, LOW);
Serial.println("No Motion");
}
delay(500);
}
