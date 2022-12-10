#include <Servo.h>

Servo servoMotor ; // creamos el objeto Servo
void setup ( ) {
  Serial.begin ( 9600 ) ;
  servoMotor.attach ( 9 ) ; // definimos el Servo en el pin 9
}
void loop ( ) {
  for (int pos = 0; pos <= 180; pos ++ ) { // cambia la posición de 0 a 180 grado por grado
    servoMotor.write ( pos ) ;
    delay ( 10 );
  }

  for (int pos = 180 ; pos >= 0 ; pos -- ) { // cambia la posicion de 180 a 0 grado por grado
    servoMotor.write ( pos );
    delay ( 10 );
  }

}
