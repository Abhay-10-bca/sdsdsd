int t=9,e=10;

void setup()
{
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(t,LOW);
  delayMicroseconds(2);

  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);

  long x=pulseIn(e,HIGH);
  int d=x*0.034/2;

  Serial.println(d);
  delay(500);
}
