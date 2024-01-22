//defines ACT_LED as pin 13
#define ACT_LED     13
//defines LDR_PIN as pin A3
#define LDR_PIN     A3

//function ran once on startup
void setup()
{
  //sets up LDR_PIN (Pin A3) as an input
  pinMode(LDR_PIN, INPUT);
  //sets up ACT_LED (Pin D13) as an output
  pinMode(ACT_LED, OUTPUT);
}

//forever loop
void loop()
{
  //dataLDR stores integer data sampled from analog pin 3 (0-1023)
  int dataLDR = analogRead(LDR_PIN);

  // if sampled data is greater than 400, the led will turn off
  if (dataLDR > 400)
  {
    digitalWrite(ACT_LED, HIGH);
  }
  
  // if sampled data is lower than 400, the led will turn on 
  else
  {
    digitalWrite(ACT_LED, LOW);
  }
}
