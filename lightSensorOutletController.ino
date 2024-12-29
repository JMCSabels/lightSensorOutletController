//Controls outlet made with instructions here: https://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/
//Arduino Nano Every

int pinOut = 10; //output to toggle relay
const int photoPin = A0; //input for photo resister, has a 10kohm resister to ground

void setup() 
{
  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(pinOut, OUTPUT);
}



void loop() 
{
  int lightLevel = analogRead(photoPin);
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  if (lightLevel <= 40)
  {
    digitalWrite(pinOut, HIGH);
  }
  else 
  {
    digitalWrite(pinOut, LOW);
  }

  
  delay(500);
}
