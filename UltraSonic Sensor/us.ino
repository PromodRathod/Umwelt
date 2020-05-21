int t1=0;
int e1=1;
int t2=2;
int e2=3;
int t3=4;
int e3=5;
int t4=6;
int e4=7;
void setup()
{
Serial.begin (9600);
pinMode(t1, OUTPUT);
pinMode(e1, INPUT);
pinMode(t2, OUTPUT);
pinMode(e2, INPUT);
pinMode(t3, OUTPUT);
pinMode(e3, INPUT);
pinMode(t4, OUTPUT);
pinMode(e4, INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
long r_sen, l_sen, f_sen, b_sen; 
void loop() {
  
  r_sen=us(t1, e1);
  l_sen=us(t2, e2); 
  f_sen=us(t3, e3);
  b_sen=us(t4, e4);
  if(r_sen<15){
    tone(8,1000,500); //tone(actuator pin,frequency, duration)
  }
  else if(r_sen<30){
    tone(8,1000,100);
    
  }
  if(l_sen<15){
    tone(9,1000,500); //tone(actuator pin,frequency, duration)
  }
  else if(l_sen<30){
    tone(9,1000,100);
    
  }
  if(b_sen<15){
    tone(10,1000,500); //tone(actuator pin,frequency, duration)
  }
  else if(b_sen<30){
    tone(10,1000,100);
    
  }
  if(f_sen<15){
    tone(11,1000,500); //tone(actuator pin,frequency, duration)
  }
  else if(f_sen<30){
    tone(11,1000,100);
    
  }
}
 
float us(int t_Pin,int e_Pin)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  float duration = pulseIn(echoPin, HIGH);
  float distance_cm;
  return distance_cm = (duration/2) / 29.1;
 
}
