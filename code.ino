#include  <Servo.h>

Servo myservo; 
Servo myservo2; 
Servo myservo3;

int pos = 85;  
int pos2 = 85; 
int pos3 = 85;

const int maxDeg = 175;
const int minDeg = 5;   

const int movement = 2; 

const int leftPin = 2; 
const int rightPin = 3;

const int leftPin2 = 4;
const int rightPin2 = 5;

const int leftPin3 = 6;
const int rightPin3 = 7;

const int outputPin = 8; 
const int outputPin2 = 9; 
const int outputPin3 = 10;

int leftPressed = 0; 
int rightPressed = 0;

int leftPressed2 = 0;
int rightPressed2 = 0;

int leftPressed3 = 0;
int rightPressed3 = 0;

void setup() 
{ 
myservo.attach(outputPin);  
myservo2.attach(outputPin2);
myservo3.attach(outputPin3);

pinMode(leftPin, INPUT); 
pinMode(rightPin, INPUT);

pinMode(leftPin2, INPUT);
pinMode(rightPin2, INPUT);

pinMode(leftPin3, INPUT);
pinMode(rightPin3, INPUT);
} 

void loop() 
{ 
leftPressed = digitalRead(leftPin); 
rightPressed = digitalRead(rightPin);

leftPressed2 = digitalRead(leftPin2);
rightPressed2 = digitalRead(rightPin2);

leftPressed3 = digitalRead(leftPin3);
rightPressed3 = digitalRead(rightPin3);

 if(leftPressed){
   if(pos < maxDeg) 
     pos += movement;
     myservo.write(pos);             
      }
      
 if(rightPressed){
   if(pos > minDeg) 
      pos -= movement;
      myservo.write(pos);                       
     }                      



 if(leftPressed2){
   if(pos2 < maxDeg) 
      pos2 += movement;
      myservo2.write(pos2);          
   }                      

 if(rightPressed2){
   if(pos2 > minDeg) 
      pos2 -= movement;
      myservo2.write(pos2);              
      }  
 if(leftPressed3){
   if(pos3 < maxDeg) 
      pos3 += movement;
      myservo3.write(pos3);              
      }                     

 if(rightPressed3){
   if(pos3 > minDeg) 
      pos3 -= movement;
      myservo3.write(pos3);               
      }

}
