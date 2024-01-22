#define ACT_LED     13
#define PWM_LED     10
#define BUTTON_PIN  2
#define LDR_PIN     A3

void setup()
{
  Serial.begin(9600);
  pinMode(ACT_LED, OUTPUT);
  pinMode(PWM_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), interuptHandler, FALLING);
  startupLED();
}

void loop()
{
  lightDetection(); //if the surrounding light is too low, the led turns on 

  PWM(); //fades a PWM LED
}

void startupLED()
{
  for (unsigned int i = 0; i < 5; i++)
  {
    digitalWrite(13, HIGH); delay(100);
    digitalWrite(13, LOW);  delay(100);
  }
}

void lightDetection()
{
  int dataLDR = analogRead(LDR_PIN);
  if (dataLDR > 400)
  {
    digitalWrite(ACT_LED, HIGH);
  }
  else
  {
    digitalWrite(ACT_LED, LOW);
  }
}

void PWM()
{
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 15) 
  {
    analogWrite(PWM_LED, fadeValue);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 15) 
  {
    analogWrite(PWM_LED, fadeValue);
    delay(30);
  }
}

void interuptHandler()
{
  Serial.println("Hello from BLIST ONE Pro - you pressed a button");
}
