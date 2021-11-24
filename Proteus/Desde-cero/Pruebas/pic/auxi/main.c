

// Librery for module TH22 OR AM2302

#byte    TRISB = 0Xf93                 // Pin mapped to PORTB
#define  DHT_IO   PIN_B1
#define  UNRESPONSIVE_SENSOR  4
#define  TIME_OUT_ERROR       3
#define  CHECK_SUM_ERROR      2
#define  DATA_OK              1



void start_signal()
{
   Output_low (DHT_IO);
   delay_ms (25);
   Output_high (DHT_IO);
   delay_us (30);
   bit_set (TRISB, 1); // Configure connection pin as input
}

short check_response()
{
   delay_us (40);

   if ( ! input (DHT_IO) )
   {
      // Read and test IF connection pin is low
      delay_us (80);

      if (input (DHT_IO) )
      {
         // Read and test IF connection pin is high
         delay_us (50);
         return 1;
      }
      else
          return 0;
   }
}

unsigned INT8 Read_Data(unsigned int8 *data)
{
     unsigned int8 i, k = 0; // k is used to count 1 bit reading duration

     for (i = 0; i < 8; i++)
     {
          k = 0;     
          while ( !input (DHT_IO))
          {
               if (++k > 100)      // Wait until pin goes high
                    return TIME_OUT_ERROR;
               delay_us (1);
          }

          delay_us (30);

          if ( ! input (DHT_IO) )
          bit_clear (*data, (7 - i) ); // Clear bit (7 - i)
          else
          {
               bit_set (*data, (7 - i) ); // Set bit (7 - i)
               while (input (DHT_IO))
               {
                    if (++k > 100)      // Wait until pin goes low
                         return TIME_OUT_ERROR;
                    delay_us (1);
               }
          }
     }
     return DATA_OK;
}

////////////////////////////////////////////////////////////////////////////////
// funcion que retorna lo siguiente:
//      * Temperatura TEMP(FLOAT)
//      * Humedad Relativa HR(FLOAT)
// define de la respuesta del sensor
//       UNRESPONSIVE_SENSOR  4
//       TIME_OUT_ERROR       3
//       CHECK_SUM_ERROR      2
//       DATA_OK              1
// datos recividos
//       RH_byte1  reciver_byte_sensor[0]
//       RH_byte2  reciver_byte_sensor[1]
//       T_byte1   reciver_byte_sensor[2]
//       T_byte2   reciver_byte_sensor[3]
//       Checksum  reciver_byte_sensor[4]
int get_data_sensor_dht22(float *temp_f, float *rh_f)
{
     unsigned int16 Temp, RH;
     unsigned int8 reciver_byte_sensor[5];                 //creamos la variable para recivir los datos
     int8 n;
     Start_signal ();
     
     if (check_response () )       // si hay respuesta del sensor
     {
          for(n=0; n<5; n++)
          {
               if(Read_Data(&reciver_byte_sensor[n]) == TIME_OUT_ERROR)
                    return TIME_OUT_ERROR;
          }     
          if (reciver_byte_sensor[4] == ((reciver_byte_sensor[0] + reciver_byte_sensor[1] + reciver_byte_sensor[2] + reciver_byte_sensor[3])&0xFF))    // verificamos CHECK SUM ERROR
          {           
               RH = make16 (reciver_byte_sensor[0], reciver_byte_sensor[1]);
               Temp = make16 (reciver_byte_sensor[2], reciver_byte_sensor[3]);
               *rh_f = (FLOAT) RH * 0.1;           // guardamos el valor en la dir apuntada por rh_f
               *temp_f = (FLOAT) Temp * 0.1;       // guardamos el valor en la dir apuntada por temp_f         
               if(Temp > 0X8000)
                    temp_f = temp_f * -1;      // si es temperatura negativa (Temp = Temp&0X7FFF;)         
               return DATA_OK;
          }
          else
               return CHECK_SUM_ERROR;       // si hay error de check sum retormamos con dicha vandera
     }
     else                         
          return UNRESPONSIVE_SENSOR;            // no hay respuesta del sensor
}
