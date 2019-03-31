
#define inputa 2
#define outputA 3
#define outputB 4
#define outputC 3
int digit4=0;
void setup() {
  // put your setup code here, to run once:
pinMode(inputa,INPUT);
pinMode(outputA,OUTPUT);
pinMode(outputB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(inputa)==1)
{digitalWrite(outputA,1);
digitalWrite(outputB,0);
digit4=1;
}
if(digit4==1){
  analogWrite(outputC,1);
  
}
}
