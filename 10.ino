int t=5,e=18,led=2,b=25;

void setup()
{
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(led,OUTPUT);
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
  {
    digitalWrite(led,HIGH);
    digitalWrite(b,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(b,LOW);
  }
}
