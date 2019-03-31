
String voice;


int LED1 = A0; //define LED 1 pin
int LED2 = A1; //define LED 2 pin
//int buzzerPin = A2; //define buzzer pin


void setup()
{
  Serial.begin(9600); //start serial communication
  //myServo.attach(10); //define our servo pin (the motor shield servo1 input = digital pin 10)
  //myServo.write(90);  //servo position is 90 degrees
  pinMode(LED1, OUTPUT); //A0 is output pin
  pinMode(LED2, OUTPUT); //A1 is output pin
  //pinMode(buzzerPin, OUTPUT); //A2 is output pin
}

void loop() 
{
  while (Serial.available()){ //Check if there is an available byte to read
     delay(10); //Delay added to make thing stable 
    char c = Serial.read(); //Conduct a serial read
    if (c == '#') {break;} //Exit the loop when the # is detected after the word
    voice += c; //Shorthand for voice = voice + c
  }
  if (voice.length() > 0){
    if(voice == "Pick Up the Bottle"){
      pickup();
      }
    
    
  voice=""; //Reset the variable after initiating
  }
}



void pickup ()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  Serial.println("it works");
}






