    /*     Arduino Rotary Encoder Tutorial
     *      
     *  by Dejan Nedelkovski, www.HowToMechatronics.com
     *  
     */
     
     #define outputA 6
     #define outputB 7
     #define B 5
     #define A 4
     int counter = 0; 
     int aState;
     int b;
     int count;
     int aLastState;  
     void setup() { 
       pinMode (outputA,INPUT);
       pinMode (outputB,INPUT);
       pinMode (A,OUTPUT);
       pinMode (B,OUTPUT);
       Serial.begin (9600);
       // Reads the initial state of the outputA
       aLastState = digitalRead(outputA);   
     } 
     void loop() { 
       if(count==0)
       {
       digitalWrite(4,0);
       digitalWrite(5,1);
       b=aLastState;
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
         Serial.println(abs(b));
         Serial.println(abs(counter)-abs(b));
         if((abs(counter)-abs(b))>20)
         {
            Serial.print("Hi");
            digitalWrite(4,0);
            digitalWrite(5,0);
            count=1;
         
         }
       } 
       aLastState = aState; // Updates the previous state of the outputA with the current state
     }}
