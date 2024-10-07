//Driving subsystem

char move[1];


void setup() {
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);
}


void loop() {
  //digitalWrite(12, HIGH); // Turn right side wheels forward
  //digitalWrite(11, LOW); // Turn right side wheels Backward
  //digitalWrite(10, HIGH); // Turn Left side wheels forward
  //digitalWrite(9, LOW); // Turn left side wheels backwards
  if (Serial.available()>0) {
    Serial.readBytes(move, 1);
    Serial.println(move[0]);
  }

  
  if (move[0]=='F') {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  else if (move[0]=='S') {
    //Turn right
    /*digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);*/
    //Stop
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  } 
}