/*
  Timothy Lear, March 2018
  Turntable controls Version 017
  Trigger Camera
  Rotate Table
  Repeat for one series
*/

//pin numbers:
const int TrigPin = 12;
const int RotPin = 11 ;
//times:
const int trigger = 1000;// time to trigger cameras
const int rotate = 1550;// time to rotate table
const int pause = 1500;// time for object to stop moving 
void setup()
{
  pinMode(TrigPin, OUTPUT);
  pinMode(RotPin, OUTPUT);

  //initialize to LOW
  digitalWrite(TrigPin, HIGH);
  digitalWrite(RotPin, HIGH);

  for (int i = 0; i < 18; i++)
  {
    //Camera trigger relay, on then off
    delay(pause); //wait for object to stop moving
    digitalWrite(TrigPin, LOW);
    delay(trigger); //wait for trigger to be noticed by cameras
    digitalWrite(TrigPin, HIGH);

    //Turntable relay, on then off
    digitalWrite(RotPin, LOW);
    delay(rotate);
    digitalWrite(RotPin, HIGH);
  }
}
void loop() {
  //no setup
}
