//right shoe analog to detect the up stairs and down stairs
const int ProxSensor1=A0;
const int ProxSensor2=A1;
int inputVal1 = 0;
int inputVal2 = 0;

void setup() 
{                
  pinMode(10, OUTPUT);  //inner actuator
  pinMode(11, OUTPUT);  //outer actuator 
  pinMode(ProxSensor1,INPUT);
  pinMode(ProxSensor2,INPUT);//Pin 2 is connected to the output of proximity sensor
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(11,HIGH);
  inputVal1 = analogRead(ProxSensor1);
  Serial.print("Op1 = ");
  Serial.println(inputVal1);
  Serial.print("Op2 = ");
  inputVal2 = analogRead(ProxSensor2);
  Serial.println(inputVal2);
  delay(500);              // wait for a second
  if(inputVal1<120)      //Check the sensor output
  {
      tone(10,1000,500);
  }
  if(inputVal1<120)      //Check the sensor output
  {
       tone(11,1000,500);
  }
}
