int lamp = 12;

void setup()
{
 pinMode(lamp,OUTPUT);
}

void loop() 
{
  float sensor = analogRead(A0);

 if(sensor > 500){
digitalWrite(lamp, LOW);  
}
    
else{
 digitalWrite(lamp, HIGH);
}
}
