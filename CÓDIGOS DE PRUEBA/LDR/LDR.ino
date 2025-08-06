float Readings (int, int);


//Generamos dos variables para leer el LDR
int ldrRead = 0;
#define LDR_PIN 0
#define LDR_PROMEDY 10


void setup()
{
Serial.begin(9600);
}


void loop()
{
ldrRead = analogRead(LDR_PIN);
Serial.println(ldrRead);
delay (500);
ldrRead = Readings(LDR_PROMEDY,LDR_PIN);
Serial.println(ldrRead);
delay (500);
}
float Readings(int cantReads,int sensorPin)
{
  float promedy = 0.0;
  for (int reads = 1; reads <= cantReads ; reads++)
  {
    promedy=promedy+analogRead(sensorPin); // Escalamiento de Pv


   delay(1);    
 }
  return (promedy/cantReads);
}