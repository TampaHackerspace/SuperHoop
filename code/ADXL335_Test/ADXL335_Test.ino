
int xPin = A0;    // select the input pin for the potentiometer
int yPin = A1;
int zPin = A2;

int xVal, yVal, zVal = 0;  // variable to store the value coming from the sensor

int xMin, yMin, zMin = 1024;
int xMax, yMax, zMax = 0;
int command = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  xVal = analogRead(xPin);    
  yVal = analogRead(yPin);    
  zVal = analogRead(zPin);    
  if(xVal < xMin) xMin = xVal;
  if(yVal < yMin) yMin = yVal;
  if(zVal < zMin) zMin = zVal;
  if(xVal > xMax) xMax = xVal;
  if(yVal > yMax) yMax = yVal;
  if(zVal > zMax) zMax = zVal;
  // turn the ledPin on
  Serial.print(xVal - xMin);
  Serial.print(",");
  Serial.print(yVal - yMin);
  Serial.print(",");
  Serial.println(zVal - zMin);
  delay(250);
  if(Serial.available() > 0)
  {
    command = Serial.read();
    if(command == 43){
      Serial.print("Maxes");
      Serial.print(xMax);
      Serial.print(",");
      Serial.print(yMax);
      Serial.print(",");
      Serial.println(zMax);
    }
    if(command == 45){
      Serial.print("Mins");
      Serial.print(xMin);
      Serial.print(",");
      Serial.print(yMin);
      Serial.print(",");
      Serial.println(zMin);
    }
    if(command == 61){
      Serial.println("Zeroing");
      xMin = yMin = zMin = 1024;
      xMax = yMax = zMax = 0;
    }
    command = 0;
  }

}


