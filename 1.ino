int led1 = 8;
int led2 = 9;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);

Serial.begin(9600);

Serial.println("LED Control");
Serial.println("1 - LED1 ON");
Serial.println("2 - LED1 OFF");
Serial.println("3 - LED2 ON");
Serial.println("4 - LED2 OFF");
}

void loop() {

if (Serial.available() > 0) {

char command = Serial.read();

if (command == '1') {
digitalWrite(led1, HIGH);
Serial.println("LED1 ON");
}

else if (command == '2') {
digitalWrite(led1, LOW);
Serial.println("LED1 OFF");
}

else if (command == '3') {
digitalWrite(led2, HIGH);
Serial.println("LED2 ON");
}

else if (command == '4') {
digitalWrite(led2, LOW);
Serial.println("LED2 OFF");
}
}
}
