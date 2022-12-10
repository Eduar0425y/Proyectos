int lucesAtras= 4;
int luceDelante= 5;
int ventiladores= 6;
char accion = Serial.read();

void setup() {
  Serial.begin(9600);
  pinMode (lucesAtras, OUTPUT);
  pinMode (luceDelante, OUTPUT);
  pinMode (ventiladores, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

   if (Serial.available()){
        if ( accion == 'A' ){
         (lucesAtras, LOW); //Luces atrás encendidas
        }
        
        else if ( accion == 'B' ){
         (lucesAtras, HIGH); //Luces atrás apagadas
        }

        else if ( accion == 'C'){
          (luceDelante, LOW); //Luces delante encendidas
        }

        else if ( accion == 'D'){
          (luceDelante, HIGH); //Luces delante apagadas
        }

        else if ( accion == 'E'){
          (ventiladores, LOW); //ventiladores encendidos
        }

        else if ( accion == 'F'){
          (ventiladores, HIGH); //ventiladores Apagados
        }
   }
   
}
