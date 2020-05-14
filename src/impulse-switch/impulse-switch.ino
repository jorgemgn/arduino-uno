/*
   Impulse switch by Jorge
   Based on "https://forum.arduino.cc/index.php?topic=189550.0"
*/

#define LED 9                         // LED attach to digital pin 9
#define BUTTON 8                      // Push button attach to digital pin 8
bool STATE = false;                   // Internal variable

void setup () {

  pinMode (LED, OUTPUT);               // Configuring LED as output
  pinMode (BUTTON, INPUT);             // Configuring Push button as input

}

void loop () {

  if (digitalRead (BUTTON) == true) {

    STATE = !STATE;                   // Invert the status signal

  }

  delay (200);                        // Prevent button bouncing

  if (STATE == true) {

    digitalWrite (LED, HIGH);         // Turn on LED

  } else {

    digitalWrite (LED, LOW);          // Turn off LED

  }
}
