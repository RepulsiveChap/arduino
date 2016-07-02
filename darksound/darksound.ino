int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  while(millis() < 5000) {
    sensorValue = analogRead(A0);
    if(sensorValue > sensorHigh){
      sensorHigh = sensorValue;
      
      }
    if (sensorValue < sensorLow){
      sensorLow = sensorValue;
      }
    }

  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);

  int pitch = map(sensorValue, sensorLow, sensorHigh, 40, 4000);
  Serial.println(pitch);
  if(pitch < 0){
    tone(8, 2000, 50);
    }
  
  delay(100);

}
