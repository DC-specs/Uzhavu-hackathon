
const int potPin = A0;  
const int ena = 5;       
const int in1 = 6;       
const int in2 = 7;   

void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600);    
}

void loop() {
  int potValue = analogRead(potPin);      
  int motorSpeed = map(potValue, 0, 1023, 0, 255); 
  
  // Motor Control
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);
  analogWrite(ena, motorSpeed);

  // Debugging
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | Motor Speed (PWM): ");
  Serial.println(motorSpeed);

  delay(100);  // Small delay for stability
}
