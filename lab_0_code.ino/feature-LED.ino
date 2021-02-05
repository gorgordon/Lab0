char input = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();
    if (input == 1){
    digitalWrite(13, HIGH);
    delay (1000);
    }
    else if (input == 0){
    digitalWrite(13, LOW);
    delay (1000);
    }
    else {
    Serial.print(input);
    }
    //Add comment
    //Add Led
  }
}
