/*
  Fundacion Kinal
  Centro Educativo Tecnico Kinal
  Electronica
  Grado: Quinto
  Curso: Taller de Electronica Digital
  Alumno: Roberto Antonio Monterroso Aguilar
  Seccion: A
  Carne: 2019507
  Proyecto: Uso de interrupciones de termporizador
*/
//Directivas del preprocesador
#define RED   3 //pin 3 para PWM de un led
#define GREEN 4 //pin 4 para PWM de un led
#define BLUE  5 //pin 5 para PWM de un led
int potenciometro = A1; //pin A1 para uso del potenciometro

//Funciones a usar
void colores_RGB (void);

//Variables
int nitidez = 0; // variable entera usar para determinar el brillo.

void setup()
{
  Serial.begin(9600);  //Inicio la comunicacion serial
  pinMode(RED, OUTPUT);  //pin donde utilizo el PWM como salida del led.
  pinMode(GREEN, OUTPUT);  //pin donde utilizo el PWM como salida del led.
  pinMode(BLUE, OUTPUT);  //pin donde utilizo el PWM como salida del led.
  pinMode(potenciometro, INPUT); // se define el pin del potenciometro como entrada.
}

void loop()
{
  nitidez = map(analogRead (potenciometro), 0, 1023, 100, 1000); // alterna los valores
  colores_RGB ();
}

void colores_RGB (void)
{
  digitalWrite(RED, 174);
  digitalWrite(GREEN, 92);
  digitalWrite(BLUE, 230);
  delay(nitidez);
  digitalWrite(RED, 255);
  digitalWrite(GREEN, 255);
  digitalWrite(BLUE, 255);
  delay(nitidez);
  digitalWrite(RED, 0);
  digitalWrite(GREEN, 255);
  digitalWrite(BLUE, 255);
  delay(nitidez);
  digitalWrite(RED, 189);
  digitalWrite(GREEN, 174);
  digitalWrite(BLUE, 20);
  delay(nitidez);
  digitalWrite(RED, 225);
  digitalWrite(GREEN, 87);
  digitalWrite(BLUE, 35);
  delay(nitidez);
}
