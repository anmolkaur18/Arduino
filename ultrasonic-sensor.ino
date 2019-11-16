int trigpin=9;
int echopin=10;
int led=13;



void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

}

void loop() {
  long duration, distance, inches, cm;
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(3);
  duration=pulseIn(echopin, HIGH);
  distance=(duration*0.034/2);
 
  delay(10);

  if(distance<50)
  {
    digitalWrite(led, HIGH);
    Serial.print(distance);
  Serial.println("CM");
 
  }
  else  
  {
    digitalWrite(led, LOW);
  }
 
}
