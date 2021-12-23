#include "Conectar-WifiManager.h"
#include "DHT22.h"
#include "Enviar-Datos.h"
#include "Funciones.h"


void setup() {
  Serial.begin(115200);
  ConectarRedWifiManager();
  dht.begin();
}


void loop() {
  Serial.println("vamos a leer");
  LecturaTH();
  Serial.println("vamos a mandar");
  EnvioDatos();
  
  Serial.println("vamos a pasar los datos");
  numero=t;
  aux2=convertirDato(numero);
  pasarbinario(aux2);
 
  Serial.println(aux2);
  for (int i=0;i<5;i++) {
        salidas(d[i],sal[i]);
  }
}
