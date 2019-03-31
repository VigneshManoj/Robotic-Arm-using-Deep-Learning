int count=0;
int counterq=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//analogWrite(11,230);
if(counterq==0){
delay(5000);
digitalWrite(4,0);
digitalWrite(11,1);
digitalWrite(2,1);
digitalWrite(3,0);


delay(5000);
digitalWrite(4,0);
digitalWrite(11,1);
digitalWrite(2,0);
digitalWrite(3,0);
counterq=1;
}
//Serial.println("hi");
//while(millis()<=1000) // do this loop for up to 1000mS
{
// code here
//analogWrite(motor1EN,180);
count=1;
if(count==0)
{digitalWrite(9,0);
digitalWrite(10,1);
delay(500);
digitalWrite(9,1);
digitalWrite(10,1);
//loopcount = loopcount+1;
count=1;
}}
}
