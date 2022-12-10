int sensoresMovimiento = 3;
int lucesAtras= 4;
int lucesDelante= 5;
int ventiladores= 6;
int televisor= 7;
int aire= 13;
int infraAire= 9;
int infraTelevisor= 10;
int interruptor= 11;
int releGlobal = 12;
int inalambrico = 1;
int automatico = 0;
int movimientoAula = digitalRead(sensoresMovimiento);

char accion = Serial.read();

int tiempo = 0;
int minutos = 0;

void setup() {
  Serial.begin(9600);
  pinMode (sensoresMovimiento, INPUT);
  pinMode (interruptor, INPUT);
  pinMode (lucesAtras, OUTPUT);
  pinMode (lucesDelante, OUTPUT);
  pinMode (ventiladores, OUTPUT);
  pinMode (televisor, OUTPUT);
  pinMode (aire, OUTPUT);
  pinMode (infraAire, OUTPUT);
  pinMode (infraTelevisor, OUTPUT);
  pinMode (releGlobal, OUTPUT); 

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

        
    
        if ( accion == 'A' ){
         (lucesAtras, LOW); //Luces atrás encendidas
        }
        
        else if ( accion == 'B' ){
         (lucesAtras, HIGH); //Luces atrás apagadas
        }

        else if ( accion == 'C'){
          (lucesDelante, LOW); //Luces delante encendidas
        }

        else if ( accion == 'D'){
          (lucesDelante, HIGH); //Luces delante apagadas
        }

        else if ( accion == 'E'){
          (ventiladores, LOW); //ventiladores encendidos
        }

        else if ( accion == 'F'){
          (ventiladores, HIGH); //ventiladores Apagados
        }

        else if ( accion == 'G'){
          (televisor, LOW); //Televisor encendido
        }

        else if ( accion == 'H'){
          (televisor, HIGH); //Televisor apagado
          Serial.print("Eduar");
        }

        else if ( accion == 'I'){
          (aire, LOW); //Aire encendido
        }

        else if ( accion == 'J'){
          (aire, HIGH); //Aire apagado
        }
        
      }
    
