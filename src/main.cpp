#include <Arduino.h>

//This code is written by SARPHARAJ AALAM.
//to write this code there is huge dedication and effort of programmer.
//so please subscribe my channel NepoTronics on youtube or follow us on facebook and instagram


// Motor control pins
const int motor1Pin1 = 7;  // Motor driver IN1
const int motor1Pin2 = 8;  // Motor driver IN2
const int enablePin1 = 6;  // Motor driver ENA (or ENB for L298N)


const int motor2Pin3 = 2;  // Motor driver IN1
const int motor2Pin4 = 4;  // Motor driver IN2
const int enablePin2 = 3;  // Motor driver ENA (or ENB for L298N)

const int fled = 12;
const int bled = 11;
int speed=200;

char command; // Variable to store incoming command from Bluetooth
void setup() 
{
  // Motor control pins are outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);

  pinMode(motor2Pin3, OUTPUT);
  pinMode(motor2Pin4, OUTPUT);
  pinMode(enablePin2, OUTPUT);

  // Start serial communication with a baud rate of 9600
  Serial.begin(9600);
}

void loop() 
{
  // Check if data is available to read from Bluetooth
  if (Serial.available() > 0) 
  {
    // Read the incoming command
    command = Serial.read();
    Stop();

    // Process the command
    switch(command) 
    {
      case 'F': // Move motor forward
        forward();
        break;
      case 'B': // Move motor backward
        backward();
        break;
      case 'L': // truns left
        turnleft();
        break;

     case 'R': // truns right
        turnright();
        break;

     case 'G':
     forwardLeft();
     break;

     case 'I':
     forwardRight();
     break;
    
    case 'H':
     backLeft();
     break;
    case 'J':
     backRight();
     break;


    case '0':
    speed=0;
    break;

    case '1':
    speed=25;
    break;

    case '2':
    speed=51;
    break;

    case '3':
    speed=76;
    break;
    
    case '4':
    speed=102;
    break;

    case '5':
    speed=127;
    break;
    
    case '6':
    speed=153;
    break;
     
     case '7':
    speed=178;
    break;
    
    case '8':
    speed=204;
    break;
    
    case '9':
    speed=229;
    break;
    
    case 'q':
    speed=255;
    break;

    case 'W':
    digitalWrite(fled,HIGH);
    break;

    case 'w':
    digitalWrite(fled,LOW);
    break;

    case 'U':
    digitalWrite(bled,HIGH);
    break;

    case 'u':
    digitalWrite(bled,LOW);
    break;
    }
  }
}
void forward(){
  digitalWrite(motor2Pin3, HIGH);
  digitalWrite(motor2Pin4, LOW);
  analogWrite(enablePin2, speed); // Adjust the speed as needed
  }
void backward(){
  digitalWrite(motor2Pin3, LOW);
  digitalWrite(motor2Pin4, HIGH);
  analogWrite(enablePin2, speed); // Adjust the speed as needed
  }
void turnleft(){
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(enablePin1, 225); // Adjust the speed as needed
}
void turnright(){
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enablePin1, 225); // Adjust the speed as needed
}
void forwardLeft(){
  forward();
  turnleft();
}
void forwardRight(){
  forward();
  turnright();
}
void backLeft(){
  backward();
  turnleft();
}
void backRight(){
  backward();
  turnright();
}
void Stop(){
  digitalWrite(motor2Pin3, LOW);
  digitalWrite(motor2Pin4, LOW);
  analogWrite(enablePin2, 0);
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(enablePin2, 0);
}
