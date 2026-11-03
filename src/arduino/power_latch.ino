bool iteration = 0; // "iteration" variable represents whether override mode is ON (= 1) or OFF (= 0)

const int reedPin = 3; // pin connected to reed switch

int lastStableState = HIGH;
int lastReading = HIGH;

unsigned long lastDebounceTime = 0;
const int debounceDelay = 20;   // milliseconds


void setup() {
  pinMode(5, OUTPUT); // controls relay switch
  pinMode(3, INPUT_PULLUP); 
  pinMode(11,INPUT_PULLUP);
}

void loop()

{
  
 // RELAY CONTROL LOGIC USING NANO

  if(iteration == 1){
    digitalWrite(5, LOW);
  }
  if(iteration == 0){
    digitalWrite(5, HIGH);
  }

  // DEBOUNCED REED SWITCH CODE
  
  int reading = digitalRead(reedPin);
  
  // if reading changed, resetting debounce timer

  if (reading != lastReading)
  {
    lastDebounceTime = millis();
  }

  // checking if stable for long enough

  if ((millis() - lastDebounceTime) > debounceDelay)
  {
    if (reading != lastStableState)
    {
      lastStableState = reading;
    }
  }

  lastReading = reading;

  // LATCH-SENSOR

  if (digitalRead(reedPin) == LOW) {
    digitalWrite(5, HIGH);
  } else if (digitalRead(reedPin) == HIGH) {
    digitalWrite(5, LOW);
  }

  // MANUAL-OVERRIDE SWITCH 

  if(digitalRead(11)==LOW){ // Button Pressed
    //Serial.println("Button Pressed");
    iteration = 1;
    digitalWrite(5, LOW);
    delay(10000);
  }
  if(digitalRead(reedPin)==HIGH){
      iteration = 0;
      digitalWrite(5, LOW);
  }
}
