|
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
  //aux++;
  delay(100); //espera 60s
}
