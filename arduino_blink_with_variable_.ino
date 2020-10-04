/* 
Blink with variablev

Turns on the LED for one second, then off for one second, repatedly 
but the interval increases by 1000 each time 

created on oct 2020
by Ahmad El-khawaldeh
*/

int blinkTime = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  
  blinkTime = blinkTime + 1000;
  
}
