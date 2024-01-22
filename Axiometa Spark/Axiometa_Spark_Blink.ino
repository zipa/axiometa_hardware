//defines ACT_LED as pin 13 
#define ACT_LED    13           

//function ran once on startup
void setup()                    
{
  //sets up ACT_LED (Pin D13) as an output
  pinMode(ACT_LED, OUTPUT);    
}

//forever loop
void loop()                     
{
  //turns the led OFF
  digitalWrite(ACT_LED, HIGH);
  // waits 1 second  
  delay(1000);
  //turns the led ON                  
  digitalWrite(ACT_LED, LOW);   
  delay(1000);
  // wait one second                
}
