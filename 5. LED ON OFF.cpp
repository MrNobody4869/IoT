// Define pins for LEDs
#define LED1 10  // LED1 is connected to pin 10
#define LED2 11  // LED2 is connected to pin 11
#define LED3 12  // LED3 is connected to pin 12
#define LED4 13  // LED4 is connected to pin 13

void setup() {
  // setup() runs once when the Arduino board is powered ON or reset
  // Set LED pins as OUTPUT so Arduino can send voltage to them
  pinMode(LED1, OUTPUT); // Set pin 10 as OUTPUT
  pinMode(LED2, OUTPUT); // Set pin 11 as OUTPUT
  pinMode(LED3, OUTPUT); // Set pin 12 as OUTPUT
  pinMode(LED4, OUTPUT); // Set pin 13 as OUTPUT
}

void loop() {
  // loop() runs again and again after setup() finishes
  // We will blink the LEDs one by one with delays
  // Turn ON LED1
  digitalWrite(LED1, HIGH); // HIGH means 5V -> LED turns ON
  delay(200);               // Wait for 200 milliseconds
  // Turn OFF LED1
  digitalWrite(LED1, LOW);  // LOW means 0V -> LED turns OFF
  delay(200);               // Wait for 200 milliseconds
  // Turn ON LED2
  digitalWrite(LED2, HIGH);
  delay(200);
  // Turn OFF LED2
  digitalWrite(LED2, LOW);
  delay(200);
  // Turn ON LED3
  digitalWrite(LED3, HIGH);
  delay(200);

  digitalWrite(LED3, LOW); //LED 3 OFF
  delay(200);

  digitalWrite(LED4, HIGH); //LED 4 ON
  delay(200);

  digitalWrite(LED4, LOW); //LED 4 OFF
  delay(200);
  // After finishing LED4, the loop starts again from LED1
}

/*

Connections:

LED TO C7
Connect 6 pin cable to below the LED and other end to first slot from right of 6 pin line



#define LED1 10, #define LED2 11, etc.:
#define is used to give a name to a value.

Here, you are saying:

LED1 = pin 10

LED2 = pin 11

LED3 = pin 12

LED4 = pin 13

This makes your code easier to read and change.
(Instead of writing 10, 11, etc. everywhere, you use LED1, LED2.)

void setup() {}:
This function runs only once when Arduino starts.

You use setup() to set the pin modes.

pinMode(LED1, OUTPUT);
pinMode() is used to tell Arduino how you want to use the pin:

OUTPUT means sending signal (like turning an LED ON or OFF).

INPUT would mean receiving signal (like from a sensor), but here we are using OUTPUT because we want to control LEDs.

So you are saying:

Pin 10 (LED1) is output.

Pin 11 (LED2) is output.

Pin 12 (LED3) is output.

Pin 13 (LED4) is output.

void loop() {}:
This function keeps running forever after setup() finishes.

Inside loop(), you are blinking the LEDs one by one.

What each command means inside loop():
digitalWrite(LED1, HIGH);
digitalWrite() is used to turn a pin ON or OFF.

HIGH means turn ON (give 5V).

So here, LED1 (pin 10) is turned ON.

delay(200);
delay() pauses the Arduino for some time.

200 means 200 milliseconds (0.2 seconds).

So after turning the LED ON, Arduino waits for 200 ms.

digitalWrite(LED1, LOW);
LOW means turn OFF (0V).

So here, LED1 (pin 10) is turned OFF.

delay(200);
Again wait for 200 ms after turning it OFF.

Step-by-step process:
Turn ON LED1 → Wait 200 ms → Turn OFF LED1 → Wait 200 ms.

Turn ON LED2 → Wait 200 ms → Turn OFF LED2 → Wait 200 ms.

Turn ON LED3 → Wait 200 ms → Turn OFF LED3 → Wait 200 ms.

Turn ON LED4 → Wait 200 ms → Turn OFF LED4 → Wait 200 ms.

Repeat the whole cycle forever.

In very simple words:
pinMode() → Sets the role of the pin (OUTPUT = send signal to LED).

digitalWrite() → Turns the LED ON or OFF.

delay() → Pauses the program for some time (makes LEDs visible blinking).

HIGH → ON.

LOW → OFF.

*/

