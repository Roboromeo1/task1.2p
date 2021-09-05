bool on=false;
void setup(){
  pinMode(10,OUTPUT);
  attachInterrupt(0,ledchange,FALLING);
  Serial.begin(9600);
  
}

void loop(){
delay(5000000);
}

void ledchange(){
on = !on;
  if(!on){
   Serial.println('You are Safe Now');
  digitalWrite(10,LOW);
  }else{
     Serial.println('Alert Intruder Detected'); 
  digitalWrite(10,HIGH);
 
  }
}
