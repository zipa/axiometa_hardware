//defines BUTTON_PIN as pin 2 
#define BUTTON_PIN     2          

//function ran once on startup
void setup()                     
{
  //initializes serial connection at baud rate 9600
  Serial.begin(9600);

  //initalizes pin D2 (button), to trigger interuptHanlder function when D2 goes form high to low.
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), interuptHandler, FALLING);
}

//forever loop
void loop()                       
{
  //do nothing or something
}


//when the button is pressed anything happening
//in void loop is halted and interuptHandler()
//is executed, in this case a message is printed 
void interuptHandler()
{
  Serial.println("Hello from BLIST ONE Pro - you pressed a button");
}
