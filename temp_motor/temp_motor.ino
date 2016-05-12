int temp_pin=A0;//ATMEGA8 PIN 23
int motor1=10; //ATMEGA8 PIN 16
int motor2=11; //ATMEGA8 PIN 17
float temparature;

void setup() 
{
  Serial.begin(9600);
  pinMode(temp_pin,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
}

void loop() 
{
  temparature=0.48828125*(analogRead(temp_pin));
  Serial.println(temparature);
  if(temparature>30.5)
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH); 
  }
  else
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW); 
  }

}
