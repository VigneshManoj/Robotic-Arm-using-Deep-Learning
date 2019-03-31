 #define outputA 2
 #define outputB 3
 #define IN1 4
 #define IN2 5
  // #define ENA 4
 int counter = 0; 
 int aState;
 int aLastState;  
 //const int trigPin = 5;
//const int echoPin = 4;
// defines variables
long duration;
int distance;
 void setup() { 
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   pinMode (IN1,OUTPUT);
   pinMode (IN2,OUTPUT);
   //pinMode (ENA,OUTPUT);
  
   // Reads the initial state of the outputA
   aLastState = digitalRead(outputA);  
//   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
//pinMode(echoPin, INPUT)

; // Sets the echoPin as an Input 
 Serial.begin (9600);
 } 
 void loop() { 
   digitalWrite(IN1,1);
     digitalWrite(IN2,0);
   aState = digitalRead(outputA); // Reads the "current" state of the outputA
   // If the previous and the current state of the outputA are different, that means a Pulse has occured
   if (aState != aLastState){     
     // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
     if (digitalRead(outputB) != aState) { 
       counter ++;
     } else {
       counter --;
     }
     Serial.print("Position: ");
     Serial.println(counter);
     if(abs(counter)-abs(aLastState)>3){
     // analogWrite(ENA,counter);
     Serial.print("Hi ");
     digitalWrite(IN1,0);
     digitalWrite(IN2,0);}
   } 
   aLastState = aState; // Updates the previous stadte of the outputA with the current state

//digitalWrite(trigPin, LOW);
//delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
//digitalWrite(trigPin, HIGH);
//delayMicroseconds(10);
//digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
//duration = pulseIn(echoPin, HIGH);
// Calculating the distance
//distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
//Serial.print("Distance: ");
//Serial.println(distance);
 }
