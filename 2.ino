int led1 = 8;
int led2 = 9;
int led3 = 10;

int button1 = 2;
int button2 = 3;

void setup() {

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
}

void loop() {

if (digitalRead(button1) == LOW) {

digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);

delay(300);

digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);

delay(300);

digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);

delay(300);

digitalWrite(led3, LOW);
}

if (digitalRead(button2) == LOW) {

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);

delay(500);

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);

delay(500);
}
}
