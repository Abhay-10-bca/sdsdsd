int ldr=A0,b=8;

void setup()
{
  pinMode(b,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x=analogRead(ldr);
  Serial.println(x);

  if(x<500)
    digitalWrite(b,HIGH);
  else
    digitalWrite(b,LOW);
}
