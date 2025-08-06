#define BUTTON_UP 25
#define BUTTON_DOWN 26
#define BUTTON_OK 34
#define BUTTON_GO 27
#define BUTTON_BACK 33

#define LED_OK 4
#define LED_ALERT 15
#define LED_PROBLEM 5

#define PUSHED LOW
#define N_PUSHED HIGH

bool ReadButtonUp = N_PUSHED;
bool ReadButtonDown = N_PUSHED;
bool ReadButtonOk = N_PUSHED;
bool ReadButtonGo = N_PUSHED;
bool ReadButtonBack = N_PUSHED;

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_UP,INPUT_PULLUP);
  pinMode(BUTTON_DOWN,INPUT_PULLUP);
  pinMode(BUTTON_OK,INPUT_PULLUP);
  pinMode(BUTTON_GO,INPUT_PULLUP);
  pinMode(BUTTON_BACK,INPUT_PULLUP);

  pinMode(LED_OK,OUTPUT);
  pinMode(LED_ALERT,OUTPUT);
  pinMode(LED_PROBLEM,OUTPUT);
}

void loop() {
  ReadButtonUp = digitalRead(BUTTON_UP);
  Serial.print("UP: ");
  if (ReadButtonUp == PUSHED) {
    Serial.print("PUSHED");
  } else {
    Serial.print("NOT PUSHED");
  }

  ReadButtonDown = digitalRead(BUTTON_DOWN);
  Serial.print(" | DOWN: ");
  if (ReadButtonDown == PUSHED) {
    Serial.print("PUSHED");
  } else {
    Serial.print("NOT PUSHED");
  }

  ReadButtonOk = digitalRead(BUTTON_OK);
  Serial.print(" | OK: ");
  if (ReadButtonOk == PUSHED) {
    Serial.print("PUSHED");
  } else {
    Serial.print("NOT PUSHED");
  }

  ReadButtonGo = digitalRead(BUTTON_GO);
  Serial.print(" | GO: ");
  if (ReadButtonGo == PUSHED) {
    Serial.print("PUSHED");
  } else {
    Serial.print("NOT PUSHED");
  }

  ReadButtonBack = digitalRead(BUTTON_BACK);
  Serial.print(" | GO: ");
  if (ReadButtonBack == PUSHED) {
    Serial.println("PUSHED");
  } else {
    Serial.println("NOT PUSHED");
  }
  
  delay(500);
  digitalWrite(LED_OK,HIGH);
  digitalWrite(LED_ALERT,HIGH);
  digitalWrite(LED_PROBLEM,HIGH);
  delay(500);
  digitalWrite(LED_OK,LOW);
  digitalWrite(LED_ALERT,LOW);
  digitalWrite(LED_PROBLEM,LOW);
}
