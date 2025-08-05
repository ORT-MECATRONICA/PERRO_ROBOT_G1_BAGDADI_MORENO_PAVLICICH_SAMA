#define PIN_RELE 2

void setup() {
  // put your setup code here, to run once:
pinMode(PIN_RELE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PIN_RELE,HIGH);
delay(3000);
digitalWrite(PIN_RELE,LOW);
}
