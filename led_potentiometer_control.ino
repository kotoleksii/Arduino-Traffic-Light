const int LED = 9;
const int POTENTIOMETER = A0;
int ledBrightness = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER);
  ledBrightness = map(potentiometerValue, 0, 1023, 0, 255);
  analogWrite(LED, ledBrightness);
}