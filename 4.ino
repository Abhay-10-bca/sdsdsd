int t=9,e=10,b=8;

void setup()
{
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(b,OUTPUT);
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

  if(d<20)
    digitalWrite(b,HIGH);
  else
    digitalWrite(b,LOW);
}
