int pirSensor {};
void setup ()
{
  pinMode (13, OUTPUT);
  pinMode (2, INPUT);
  Serial.begin(9600);
}

void loop ()
{
  pirSensor = digitalRead (2);
  if (pirSensor == HIGH)
    {
      Serial.println('Alert Intruder Detected'); 
      digitalWrite(13, HIGH);
      
    }
  else
    {
    digitalWrite (13, LOW);
        Serial.println('You are Safe Now');
    }
     
  delay (10);
}
