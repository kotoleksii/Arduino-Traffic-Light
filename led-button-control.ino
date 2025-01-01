const int LED = 8; 
const int BUTTON = 4; 
int currentButtonState = LOW; 
int previousButtonState = LOW; 
bool ledState = false; 

void setup() {
  pinMode(LED, OUTPUT); 
  pinMode(BUTTON, INPUT); 
}

void loop() {
  currentButtonState = digitalRead(BUTTON);

  if (currentButtonState == LOW && previousButtonState == HIGH) {
    ledState = !ledState; 
    digitalWrite(LED, ledState ? HIGH : LOW);
    delay(50); 
  }
  
  previousButtonState = currentButtonState; 
}