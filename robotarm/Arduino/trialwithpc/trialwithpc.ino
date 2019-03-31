const int motor1A=2;
const int motor1B=3;
//const int motor1EN=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motor1A,OUTPUT);
pinMode(motor1B,OUTPUT);
//pinMode(motor1EN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
     switch(Serial.read())
     {
      case'0': {
                  //analogWrite(motor1EN,100);
                  digitalWrite(motor1A,0);
                  digitalWrite(motor1B,1);
                  Serial.println("hi");
                  break;
                }
      case'1': {
                  //analogWrite(motor1EN,120);
                  digitalWrite(motor1A,1);
                  digitalWrite(motor1B,0);
                  break;
                }
      default: break;
      }
     }
  }

