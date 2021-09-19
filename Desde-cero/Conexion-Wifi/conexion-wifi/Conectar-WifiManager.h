#include <ESP8266WiFi.h> 
#include <strings_en.h>
#include <WiFiManager.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <Ticker.h>

#define pinLedWifi D4

Ticker ticker;

void parpadeoLedWifi(){
  byte estado= digitalRead(pinLedWifi);
  digitalWrite(pinLedWifi, !estado);
}

void ConectarRedWifiManager(){
  pinMode(pinLedWifi, OUTPUT);

  ticker.attach(0.2,parpadeoLedWifi);
  
  WiFiManager wifiManager; //Creamos un objeto de clase WiFiManager


  //La linea de abajo, olvida las conexiones anteriores, es para probar WifiManager
  //wifiManager.resetSettings(); 

  if(!wifiManager.autoConnect("Luces_Esp82662")){

    Serial.println("Ups! Algo salio mal, Fallo la conexion");
    ESP.reset();
    delay(1000);
  }

  Serial.println("Se conecto perruki");
   ticker.detach();
  digitalWrite(pinLedWifi,HIGH);
}
