// arduino code for the gauntlet
const int iLED = 12; // index finger LED
const int mLED = 11; // middle finger LED
const int rLED = 10; // ring finger LED
const int lLED = 9; // little finger LED

const int iSense = A2; // index finger sensor
const int mSense = A3; // middle finger sensor
const int rSense = A4; // ring finger sensor
const int lSense = A5; // little finger sensor

void setup() {
  for (int i = 0; i < 2; i++)
  {
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      if (i == 0) {
        pinMode(pinNo, OUTPUT);
      }
      digitalWrite(pinNo, HIGH);
    }
    delay(500);
    for (int pinNo = 9; pinNo < 13; pinNo++) {
      digitalWrite(pinNo, LOW);
    }
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(iLED, HIGH);
  digitalWrite(mLED, HIGH);
  digitalWrite(rLED, HIGH);

}
