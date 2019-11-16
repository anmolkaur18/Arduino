#define SENSE A1 

void setup()
{
pinMode(SENSE, INPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
//Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{ //Serial.println(SENSE);
if((digitalRead(SENSE)==HIGH))
{digitalWrite(2, LOW);
noTone(3);
}
else 
{ delay (1000);
 digitalWrite(2, HIGH);
 tone(3, 330);// E
}}
