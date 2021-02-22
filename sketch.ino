const int ledPIN = A1;
const int potentiometer = A0;

void setup() {
  // put your setup code here, to run once:

    pinMode(ledPIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    int val = analogRead(potentiometer);
    float toRGB = float(val)/1023 * 255;
    Serial.println(toRGB);
    
    analogWrite(ledPIN,int(toRGB));
}
