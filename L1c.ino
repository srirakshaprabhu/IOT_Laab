// C++ code
//
const int ledPins[]={2,3,4,5,6};
const int numLeds=5;
void setup()
{
  for(int i=0;i<numLeds;i++){
  pinMode(ledPins[i], OUTPUT);
}
}
void loop()
{
  for(int i=0;i<numLeds;i++){
    if(i%2==0){
  digitalWrite(ledPins[i], HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(ledPins[i], LOW);
  delay(200); // Wait for 1000 millisecond(s)
}
}
for(int i=numLeds-1;i>=0;i--){
  if(i%2==0){
  digitalWrite(ledPins[i], HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(ledPins[i], LOW);
  delay(200); // Wait for 1000 millisecond(s)
}
}
}
