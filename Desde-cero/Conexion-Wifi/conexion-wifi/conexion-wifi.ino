#include "Conectar-WifiManager.h"
#include "DHT22.h"
#include "Enviar-Datos.h"



void setup() {
  Serial.begin(115200);
  ConectarRedWifiManager();
  Serial.println(F("DHT 11 prueba de conexión con el servidor"));
  dht.begin();
  }


void loop() {
  LecturaTH();
  EnvioDatos();
}
