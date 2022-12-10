int aire= 13;
int tiempo = 0;
int minutos = 0;

void setup() {
   pinMode (aire, OUTPUT);
}

void loop() {

  tiempo = tiempo + 1;
  delay (1000);
  if (tiempo == 60){
    minutos = minutos + 1;
    tiempo = 0;
    Serial.print(minutos);
  
    if(minutos >= 15){
      digitalWrite (aire, LOW);
    }
  }

}
