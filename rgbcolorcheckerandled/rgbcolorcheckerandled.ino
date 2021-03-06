const int redLEDPin = 9;
const int greenLEDPin = 11;
const int blueLEDPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;



void setup() {
Serial.begin(9600);

pinMode(greenLEDPin, OUTPUT);
pinMode(redLEDPin, OUTPUT);
pinMode(blueLEDPin, OUTPUT);

}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  blueSensorValue = analogRead(blueSensorPin);

  Serial.print("Raw sensor Values \t Red: ");
  Serial.print(redSensorValue);
  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.print(blueSensorValue);

  redValue = redSensorValue/4;
  greenValue = greenSensorValue/4;
  blueValue = blueSensorValue/4;

  Serial.print("Mapped sensor value \t Red: ");
  Serial.print(redValue);
  Serial.print("\t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  //analogWrite(redLEDPin, redValue);
  //analogWrite(greenLEDPin, greenValue);
  //analogWrite(blueLEDPin, blueValue);

  for(int a=0; a<=255; a++){
    analogWrite(redLEDPin, a);
    delay(10);
    }
  for(int a=0; a<=255; a++){
    analogWrite(greenLEDPin, a);
    delay(10);
    }
  for(int a=0; a<=255; a++){
    analogWrite(blueLEDPin, a);
    delay(10);
    }

}
