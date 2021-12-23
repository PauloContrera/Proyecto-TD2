#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFiMulti.h>

WiFiClient client; 
int aux=0;
void EnvioDatos(){
  if (WiFi.status() == WL_CONNECTED){ 
     HTTPClient http;  // creo el objeto http
     String datos_a_enviar = "temperatura=" + String(t) + "&humedad=" + String(h) + "&aux=" + String(aux);  

     http.begin(client,"http://proyecto-td.000webhostapp.com/src/php/EspPost.php");
     http.addHeader("Content-Type", "application/x-www-form-urlencoded"); // defino texto plano..

     int codigo_respuesta = http.POST(datos_a_enviar);

     if (codigo_respuesta>0){
      Serial.println("Codigo HTTP: "+ String(codigo_respuesta));
        if (codigo_respuesta == 200){
          String cuerpo_respuesta = http.getString();
          Serial.println("El servidor respondio: ");
          Serial.println(cuerpo_respuesta);
          if(aux>=61){
            aux=0;
          }
          String EstadoLED1E="Encender11";
          String EstadoLED1A ="Apagar11";
          if(EstadoLED1E==cuerpo_respuesta){
            digitalWrite(LedA,HIGH);
            Serial.println("A1");
          }
          if(EstadoLED1A==cuerpo_respuesta){
            digitalWrite(LedA,LOW);
            Serial.println("A0");
          }

          
          String EstadoLED2E="1Encender1";
          String EstadoLED2A ="1Apagar1";
          if(EstadoLED2E==cuerpo_respuesta){
            digitalWrite(LedB,HIGH);
            Serial.println("B1");
          }
          if(EstadoLED2A==cuerpo_respuesta){
            digitalWrite(LedB,LOW);
            Serial.println("B0");
          }
          String EstadoLED3E="11Encender";
          String EstadoLED3A ="11Apagar";
          if(EstadoLED3E==cuerpo_respuesta){
            digitalWrite(LedC,HIGH);
            Serial.println("C1");
          }
          if(EstadoLED3A==cuerpo_respuesta){
            digitalWrite(LedC,LOW);
            Serial.println("C0");
          }
          }
        
     } else {
        Serial.print("Error enviado POST, código: ");
        Serial.println(codigo_respuesta);
     }

       http.end();  // libero recursos
       
  } else {
     Serial.println("Error en la conexion WIFI");
  }
  aux=aux+1;
  delay(100); //espera 60s
}
