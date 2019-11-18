int led=9;
int led1=10;
int led2=11;
int obstaclepin=7;//this is our input pin 
int hasobstacle = HIGH;//MEANS NO OBSTACLE
int obstaclecounter =0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
hasobstacle=digitalRead(obstaclepin);//reads the output from the sensor through pin 7 
if(hasobstacle==LOW)//means something is ahead
{digitalWrite(led,HIGH);
obstaclecounter++;
}
if(obstaclecounter==2);
{digitalWrite(led1,HIGH);
delay(5);

}
if(obstaclecounter==3);
{digitalWrite(led2,HIGH);
delay(5);}
if(obstaclecounter==4);
{digitalWrite(led2,LOW);
delay(5);}
if(obstaclecounter==5);
{digitalWrite(led1,LOW);
delay(5);}
if(obstaclecounter==6);
{digitalWrite(led,LOW);
delay(5);}}
