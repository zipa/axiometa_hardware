//defines PWM_LED as pin 10 
#define PWM_LED       10            

//function ran once on startup
void setup()                        
{
  //sets up PWM_LED (Pin D10) as an output 
  pinMode(PWM_LED, OUTPUT);         
}

//forever loop
void loop()                        
{
  //Changes voltage on the D10 from 0-255 where o is 0V and 255 is 5V. With a step of +10every 30ms
  for (int pwmValue = 0 ; pwmValue <= 255; pwmValue += 10)
  {
    analogWrite(PWM_LED, pwmValue);
    delay(30);
  }

  //Changes voltage on the D10 from 255-0 where o is 0V and 255 is 5V. With a step of -10 every 30ms
  for (int pwmValue = 255 ; pwmValue >= 0; pwmValue -= 10)
  {
    analogWrite(PWM_LED, pwmValue);
    delay(30);
  }
}
