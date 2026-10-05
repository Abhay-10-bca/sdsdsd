int ldrPin = 34; // LDR analog input
int ledPin = 2; // LED
int buzzerPin = 4; // Buzzer

int ldrValue;

void setup() {
Serial.begin(115200);

pinMode(ledPin, OUTPUT);
pinMode(buzzerPin, OUTPUT);

Serial.println("LDR Light Detection Started");
}

void loop() {

ldrValue = analogRead(ldrPin);

Serial.print("LDR Value: ");
Serial.println(ldrValue);

// Adjust this value after observing your readings
if (ldrValue < 1500) {

// Dark
digitalWrite(ledPin, HIGH);
digitalWrite(buzzerPin, HIGH);

Serial.println("Dark - Alarm ON");

} else {

// Bright
digitalWrite(ledPin, LOW);
digitalWrite(buzzerPin, LOW);

Serial.println("Bright - Alarm OFF");
}

delay(500);
}
