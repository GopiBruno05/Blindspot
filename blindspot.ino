// // Define pins for ultrasonic sensor 1
#define TRIGGER_PIN_1  2
#define ECHO_PIN_1     3

// // Define pins for ultrasonic sensor 2
#define TRIGGER_PIN_2  6
#define ECHO_PIN_2     7

// Define pins for the vibration motor
#define MOTOR_PIN_1    4


void setup() {
  Serial.begin(9600);
  
  pinMode(TRIGGER_PIN_1, OUTPUT);
  pinMode(ECHO_PIN_1, INPUT);
  
  pinMode(TRIGGER_PIN_2, OUTPUT);
  pinMode(ECHO_PIN_2, INPUT);
  pinMode(MOTOR_PIN_1, OUTPUT);
  
}

void loop() {
  long duration1, distance1;
  long duration2, distance2;
  
  
  
  // // Trigger the ultrasonic sensor by sending a pulse
  digitalWrite(TRIGGER_PIN_1, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN_1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN_1, LOW);
  
  // Measure the duration of the pulse
  duration1 = pulseIn(ECHO_PIN_1, HIGH);
  
  // Calculate the distance based on the speed of sound (in cm)
  distance1 = duration1 * 0.034 / 2;
  // Serial.println("Distance 1 =");
  // Serial.println(distance1);


  digitalWrite(TRIGGER_PIN_2, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN_2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN_2, LOW);
  
  // Measure the duration of the pulse
  duration2 = pulseIn(ECHO_PIN_2, HIGH);
  
  // Calculate the distance based on the speed of sound (in cm)
  distance2 = duration2 * 0.034 / 2;
  // Serial.println("Distance 2 = ");
  // Serial.println(distance2);
  
  if ((distance1 > 0 && distance1 < 40) || (distance2 > 0 && distance2 < 40)) {
  // If obstacle is detected within 40cm, vibrate the motor
  Serial.println("Condition reached");
  digitalWrite(MOTOR_PIN_1, HIGH);
} else {
  // If no obstacle detected or out of range, turn off the motor
  digitalWrite(MOTOR_PIN_1, LOW);
}


  delay(500); // Adjust delay as needed
}