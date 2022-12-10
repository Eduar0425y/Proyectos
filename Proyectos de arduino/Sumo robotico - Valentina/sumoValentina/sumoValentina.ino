int pin1Motor = 4;
int pin2Motor = 5;
int pin3Motor= 6;
int pin4Motor= 7;
int pinMotorTurbo= 8;
int salidaLeds= 9;
boolean turbo = false;
char entrada = ' ';

void setup(){
  Serial.begin(9600);
  pinMode(pin1Motor, OUTPUT);
  pinMode(pin2Motor, OUTPUT);
  pinMode(pin3Motor, OUTPUT);
  pinMode(pin4Motor, OUTPUT);
  pinMode(pinMotorTurbo, OUTPUT);
  pinMode(salidaLeds, OUTPUT);
}


void loop(){
  if(Serial.available()){
    entrada = Serial.read();
    

    if(entrada == 'A' && turbo == true){ // MOTORES DELANTE CON TURBO
      digitalWrite(pin1Motor, HIGH);
      digitalWrite(pin2Motor, LOW);
      digitalWrite(pin3Motor, HIGH);
      digitalWrite(pin4Motor, LOW);
      digitalWrite(pinMotorTurbo, HIGH);
      Serial.println("MOTORES DELANTE CON TURBO");
    }
    
    else if(entrada == 'A'){ //MOTORES DELANTE
      digitalWrite(pin1Motor, HIGH);
      digitalWrite(pin2Motor, LOW);
      digitalWrite(pin3Motor, HIGH);
      digitalWrite(pin4Motor, LOW);
      Serial.println("MOTORES DELANTE");
    }
    else if(entrada == 'B'){ // MOTORES ATRAS
      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,HIGH);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,HIGH);
      Serial.println("MOTORES ATRAS");
    }
    else if(entrada == 'C'){ //MOTORES DERECHA
      digitalWrite(pin1Motor,HIGH);
      digitalWrite(pin2Motor,LOW);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,HIGH);
      Serial.println("MOTORES DERECHA");
    }
    else if(entrada == 'D'){ //MOTORES IZQUIERA
      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,HIGH);
      digitalWrite(pin3Motor,HIGH);
      digitalWrite(pin4Motor,LOW);
      Serial.println("MOTORES IZQUIERA");
    }

    else if(entrada == 'E'){ //Encender turbo
      turbo = true; 
      Serial.println("Turbo encendido");
    }

    else if(entrada == 'H'){
      turbo = false;
      Serial.println("Turbo apagado");
    }

    else if(entrada == 'F'){//Luces Ojos encender
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(salidaLeds,LOW);
      delay(1000);
      digitalWrite(salidaLeds,HIGH);
      Serial.println("Ojos encendidos");
    }

    else if(entrada == 'G'){//Luces Ojos Apagar
      digitalWrite(salidaLeds,LOW);
      delay(1000);
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(salidaLeds,LOW);
      Serial.println("Ojos apagados");
    }

    else if(entrada == 'I'){ //apagar motores
      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,LOW);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,LOW);
      Serial.println("Motores apagados");
    }

    else if(entrada == 'J'){  //Baile Winner
      digitalWrite(pin1Motor, HIGH);
      digitalWrite(pin2Motor, LOW);
      digitalWrite(pin3Motor, HIGH);
      digitalWrite(pin4Motor, LOW);
      delay(3000);
      
      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,HIGH);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,HIGH);
      delay(3000);
      
      digitalWrite(pin1Motor, HIGH);
      digitalWrite(pin2Motor, LOW);
      digitalWrite(pin3Motor, HIGH);
      digitalWrite(pin4Motor, LOW);
      digitalWrite(pinMotorTurbo, HIGH);
      delay(3000);

      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,HIGH);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,HIGH);
      digitalWrite(pinMotorTurbo, LOW);
      delay(3000);

      digitalWrite(pin1Motor,HIGH);
      digitalWrite(pin2Motor,LOW);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,HIGH);
      digitalWrite(pinMotorTurbo, HIGH);
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(salidaLeds,LOW);
      delay(1000);
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(pinMotorTurbo, LOW);
      delay(1000);
      digitalWrite(pinMotorTurbo, HIGH);
      delay(3000);

      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,HIGH);
      digitalWrite(pin3Motor,HIGH);
      digitalWrite(pin4Motor,LOW);
      digitalWrite(pinMotorTurbo, HIGH);
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(salidaLeds,LOW);
      delay(1000);
      digitalWrite(salidaLeds,HIGH);
      delay(1000);
      digitalWrite(pinMotorTurbo, LOW);
      delay(1000);
      digitalWrite(pinMotorTurbo, HIGH);
      delay(3000);

      digitalWrite(pin1Motor,LOW);
      digitalWrite(pin2Motor,LOW);
      digitalWrite(pin3Motor,LOW);
      digitalWrite(pin4Motor,LOW);
      digitalWrite(pinMotorTurbo, LOW);
      delay(1000);
      digitalWrite(salidaLeds,LOW);
      delay(1000);
      
    }


  }
} 
