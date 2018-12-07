
int counter = 0;
int value;
int ldr= A0;
int laser = 13;
char data;

void setup() {
  // put your setup code here, to run once:
pinMode(laser, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  data=Serial.read();
}
if (data=="0")
{
  
  digitalWrite(laser, HIGH);
  if(value>800)
  
  else if (data=="c")
  
  {
    digitalWrite(laser, LOW);
  }
  
  }
}
