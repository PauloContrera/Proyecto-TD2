#include "Conectar-WifiManager.h"
#include "DHT22.h"
#include "Enviar-Datos.h"


void setup() {
  Serial.begin(115200);
  ConectarRedWifiManager();
  dht.begin();
  }


void loop() {
  LecturaTH();
  EnvioDatos();
}
