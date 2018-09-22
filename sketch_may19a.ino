int pinLED = 13;
int pinLED1 = 12;
int pinLED2 = 11;
int pinLED3 = 10;
int pinLED4 = 9;
int pinLED5 = 8;
int timeDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED1, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED2, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED3, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED4, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED5, HIGH);
  
  digitalWrite(pinLED5, LOW);
  delay(timeDelay);
  digitalWrite(pinLED4, LOW);
  delay(timeDelay);
  digitalWrite(pinLED3, LOW);
  delay(timeDelay);
  digitalWrite(pinLED2, LOW);
  delay(timeDelay);
  digitalWrite(pinLED1, LOW);
  delay(timeDelay);
  digitalWrite(pinLED, LOW);
  delay(timeDelay);

//  digitalWrite(pinLED1, HIGH);
//  delay(timeDelay);
//  digitalWrite(pinLED1, LOW);
//  delay(timeDelay);
//
//  digitalWrite(pinLED2, HIGH);
//  delay(timeDelay);
//  digitalWrite(pinLED2, LOW);
//  delay(timeDelay);
//
//  digitalWrite(pinLED3, HIGH);
//  delay(timeDelay);
//  digitalWrite(pinLED3, LOW);
//  delay(timeDelay);
//
//  digitalWrite(pinLED4, HIGH);
//  delay(timeDelay);
//  digitalWrite(pinLED4, LOW);
//  delay(timeDelay);
//
//  digitalWrite(pinLED5, HIGH);
//  delay(timeDelay);
//  digitalWrite(pinLED5, LOW);
//  delay(timeDelay);


  

}
