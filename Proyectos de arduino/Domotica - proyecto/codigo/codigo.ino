int RelLuces1 = 2;
int RelLuces2 = 3;
int infraAire = 4;
int infraVB = 5;
int sensoresMov = 6;
int relGlobal = 7;
int motorIN1 = 8;
int motorIN2 = 9;
int motorIN3 = 10;
int motorIN4 = 11;

int motorBajo [4] [4] = {
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};

int motorArriba [4] [4] {
  {1, 0, 0, 1},
  {0, 0, 1, 1},
  {0, 1, 1, 0},
  {1, 1, 0, 0}
};

char accion;

void setup () {
  Serial.begin(9600);
  pinMode(RelLuces1, OUTPUT);
  pinMode(RelLuces2, OUTPUT);
  pinMode(infraAire, OUTPUT);
  pinMode(infraVB, OUTPUT);
  pinMode(sensoresMov, INPUT);
  pinMode(relGlobal, OUTPUT);
  pinMode(motorIN1, OUTPUT);
  pinMode(motorIN2, OUTPUT);
  pinMode(motorIN3, OUTPUT);
  pinMode(motorIN4, OUTPUT);
}

void loop() {
  if (Serial.available()){
    accion = Serial.read();
    if (accion == 'A'){
      digitalWrite(RelLuces1, LOW); //Luces atrás encendidas
    }
  }
}
