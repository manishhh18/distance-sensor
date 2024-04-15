
int trigpin = 9; //define pins for HC-SR04
int echopin = 10;

long duration; //used in distance calculation
int distance;

void setup() {
  Serial.begin(9600);  //initalize input and output pins
  pinMode( trigpin , OUTPUT);
  pinMode( echopin , INPUT);
}

void loop() {
  digitalWrite(trigpin ,LOW);  //call trigpin
  delayMicroseconds(2);

  digitalWrite(trigpin , HIGH);  //activate for 10micro sec
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration= pulseIn(echopin, HIGH);  //read echopin for time
  
  distance= duration*0.034/2; //calculating distance

  Serial.print("Distance:");  //print output on serial monitor
  Serial.println(distance);  
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx