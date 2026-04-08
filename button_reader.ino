const int buttonPin = 2;
//const is short for constant and means that the value defined will not change while the program is running
//int stands for integer, meaning the value defined will be an integer
//buttonPin is the name given to pin 2 for legibility
//in this case we do not need to name the pin, but for later when we need many pins it is a good habit to get into.

void setup() {
  pinMode(buttonPin, INPUT);
  //pinMode sets the mode of the pin to either INPUT or OUTPUT
  //INPUT means observe the flowing electricity
  //OUTPUT means emit electricity like the 5V pin
  Serial.begin(9600);
  //Serial is how Arduino talks to the computer, Arduino can send messages that appear on the computer monitor now.
  //begin starts the communication, you only have to do it once during the setup.
  //9600 is called the baud rate, it is how fast Arduino sends data to the computer. It will send at 9600 bits per second.
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  //int will set the variable buttonState to an integer every time the loop runs
  //buttonState is the name of the variable
  //digitalRead() is a command that asks Arduino to check a pin and return a number. 1 if voltage is detected, 0 if not.
  //inside digitalRead() is buttonPin which is pin 2
  //Overall, this line sets buttonState as a variable equal to the integer 1 if voltage is detected and equal to the integer 0 if not.
  Serial.println(buttonState);
  //.println() is a command to print something. The serial monitor will print 0 or 1.
  //the ln means print and go to a new line
  //buttonState is either 0 or 1, on the Serial monitor, 0 or 1 will be printed.
  delay(100);
  //delay pauses the program for a certain number of milliseconds.
  //To prevent flooding the serial monitor with numbers, only one number will be generated every 100 milliseconds.
}
