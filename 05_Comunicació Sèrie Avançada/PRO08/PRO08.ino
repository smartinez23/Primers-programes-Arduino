/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                                       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num;
int comptador = 0;
int suma = 0;
float mitja = 0;
//*********************************************************************************
void setup() {
  Serial.begin(9600);
  Serial.print("Entrar numeros un per un (per acabar 0):");

}

void loop() {
  while (Serial.available() > 0){
  num = Serial.parseInt();
  if (Serial.read() == '\n') {
    
     if(num!=0)
     {
     Serial.print(num);
     Serial.print("-");
     comptador = comptador + 1;
     suma = suma + num;
     }
      else
    {
       Serial.println(0);
       Serial.print("S'han entrat ");
       Serial.print(comptador);
       Serial.print(" numeros, i la suma de tots ells es ");
       Serial.print(suma);
       Serial.print(" i la mitja ");
       mitja = (float (suma))/ (float (comptador));
       Serial.println(mitja);
       Serial.println(" ");
       Serial.print("Entrar numeros un per un (per acabar 0):");
       comptador = 0;
       suma = 0;
       mitja = 0;
    }
    }
    

  
    
  }
  }
