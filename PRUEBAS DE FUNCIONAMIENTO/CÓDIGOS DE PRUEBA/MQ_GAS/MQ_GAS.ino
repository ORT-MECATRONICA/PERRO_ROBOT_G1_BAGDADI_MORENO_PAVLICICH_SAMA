float Readings (int, int);


//Generamos dos variables para leer el LDR
int gasRead = 0;
#define GAS_PIN 0
#define GAS_PROMEDY 10


void setup()
{
Serial.begin(9600);
}


void loop()
{
gasRead = analogRead(GAS_PIN);
Serial.println(gasRead);
delay (500);
gasRead = Readings(GAS_PROMEDY,GAS_PIN);
Serial.println(gasRead);
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



