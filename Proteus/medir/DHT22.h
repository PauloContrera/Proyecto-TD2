#include <Adafruit_Sensor.h>
#include "DHT.h"

float t=30;
float h;
float f;
float hif;
float hic;

#define DHTPIN 14
#define DHTTYPE DHT22 
DHT dht(DHTPIN, DHTTYPE);

void LecturaTH(){

  h = dht.readHumidity();
  t = dht.readTemperature();
  f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  /*if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }*/

  // Compute heat index in Fahrenheit (the default)
  hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  hic = dht.computeHeatIndex(t, h, false);

  /*
  Serial.print(F("Humidity: "));
  Serial.print(h);
 
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
 
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F")); 
  */

}
