int ir=34,led=2,b=25;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop()
{
  int x=analogRead(ir);
  Serial.println(x);

  if(x>2000)
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
