int led=13

void setup ()
{
  
  pinMode (13,OUTPUT);
  Serial.begin (9600);}
 
void loop() {
  // read the input on analog pin 0:
  int value = analogRead(A1);
  
  if (value > 500) {
    Serial.println("water available");
    digitalWrite (13,HIGH);}
    if (value <10 )
    {
   Serial.println("water shortage");
   digitalWrite (13,LOW);
    delay(100);
    }
    }
  
