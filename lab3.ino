
int Smoke_Sensor=0;
void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  Smoke_Sensor=analogRead(A0);
  Serial.println(Smoke_Sensor);
  if(Smoke_Sensor>=80){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
  if(Smoke_Sensor>=100){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  delay(10);
  }
}
     
