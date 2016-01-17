#include <AFMotor.h>
#include <NewPing.h>
#define TRIGGER_PIN  A4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     A5  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

int ledPin = 14;  //define the pin that the LED is on
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.


/////////////////////////////////////////////////////////////////////////////DRAWING SPACE SETUP//////////////////////////////////////////////////////////
int drawingWidth = 80; // width of the drawing space in CM
int motorSpeed = 4;  //the speed of the motors  (6-7 is about the max speed with a weight  - 2-3 max without weight)
/////// 1000 steps = 30cm wide diamond
/////// 1cm = 33.3 steps
/////// 
/////// 
/////// 

int upperLimit = 1;  //the top of the drawing space
int lowerLimit = drawingWidth*33; // the size of the sides of the diamond (roughly - adjust to suit on install)
int L = lowerLimit-1; // Left motor string length - at the bottom of the drawing space (-1 because we add 1 in the setup to engage motors)
int R = lowerLimit-1; // Right Motor string length - within the defined space above (-1 because we add 1 in the setup to engage motors)

///////////////////////////////// DRAWING STYLE VARIABLES - probably get these sorted out before the show ///////////////////////////
int stepSizeLimit = 30; //this is for the MediumStep function - currently not used
int lateralLineLimit; // this is the max length of the long lateral lines when going up or down
int lineGap; // max 'large gap' between dense lines
int randoChoice;
int lineGapChoice;
int randoChoiceLimit;

int lateralLineLargeLimit = 500;
int lateralLineSmallLimit = 40;
int percentChanceOfChoosingLargeLineLimit = 30;


int lineGaplargeLimit = 100; 
int lineGapSmallLimit = 3;
int percentChangeOfChoosingGapLargeLimit = 50;

//////////////////////VERTICAL LINES//////////////

int verticalSizeLineLimit = 400;

// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(motorSpeed); //initiate left motor speed
  RM.setSpeed(motorSpeed); //initiate right motor speed
  delay(2000);
  RM.step(1, BACKWARD, INTERLEAVE); //engage right motor
  LM.step(1, BACKWARD, INTERLEAVE); //engage left motor
    pinMode(ledPin, OUTPUT);  
  delay(2000);  //wait 4 seconds, then start the bot going
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {


  ////////////////////////////////////////////SENSOR INPUT for HC-SR04//////////////////////////////////////////////////////////////////////////////////////
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  
  
  ///////////////////////Do these things when sensor is active or not//////////////////////////
  while(sonar.ping_cm() <10){  //while the sensor is reading 'not much' set the motor speed to 0 and the LED to off.
    digitalWrite(ledPin, LOW); 
    DefaultSmallStep();

  }
  while(sonar.ping_cm() >10){ //while the sensor is reading HIGH, set motors moving and turn on the LED
    digitalWrite(ledPin, HIGH); 
    LeftSideUpLineShapes();
    RightSideUpLineShapes();
    LeftSideDownLineShapes();
    RightSideDownLineShapes();
  }

  ////////////////////////////////////////////////////////////MOVE THE BOT WHILE TESTING BOUNDARIES////////////////////////////////////////////////////////////////////////////////// 
  /*
   LeftSideUpLineShapes();
   RightSideUpLineShapes();
   LeftSideDownLineShapes();
   RightSideDownLineShapes();
   */
  // DefaultSmallStep();
  //verticalLinesDown(); 
  //testBoundaries();

}





