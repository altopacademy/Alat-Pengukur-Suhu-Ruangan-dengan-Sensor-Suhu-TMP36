int nilaiSensor;
float temperatur;
float voltase;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  nilaiSensor = analogRead(A0);
  voltase = (float(nilaiSensor)/1023) *5;
  temperatur = (voltase-0.5)*100;
  Serial.print("Tempeature : ");
  Serial.println(temperatur);
  delay(1000);
}
