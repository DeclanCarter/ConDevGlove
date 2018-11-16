// arduino code for the gauntlet
const int iLED = 13; // index finger LED
const int mLED = 12; // middle finger LED
const int rLED = 11; // ring finger LED
const int lLED = 10; // little finger LED

const int iSense = A2; // index finger sensor
const int mSense = A3; // middle finger sensor
const int rSense = A4; // ring finger sensor
const int lSense = A5; // little finger sensor

void setup() {
  for (int i = 0; i < 2; i++)
  {
    for (int pinNo = 2; pinNo < 6; pinNo++) {
      if (i == 0) {
        pinMode(pinNo, OUTPUT);
      }
      digitalWrite(pinNo, HIGH);
    }
    delay(1);
    for (int pinNo = 2; pinNo < 6; pinNo++) {
      digitalWrite(pinNo, LOW);
    }
    delay(1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
