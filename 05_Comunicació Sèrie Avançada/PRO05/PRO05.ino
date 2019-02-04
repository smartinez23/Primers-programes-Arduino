/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                                       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num;
int comptador;
//*********************************************************************************
void setup() { 
  Serial.begin(9600);        
  Serial.println("Entra un numero?");
}
//*********************************************************************************
void loop() {
  while (Serial.available() > 0) {  
  num = Serial.parseInt();
  if (Serial.read() == '\n') { 
   Serial.print("El número ");
   Serial.print(num);
   comptador = 1;
    while(num/10 > 0)
    {
      num = num/10;
      comptador++;
    }
    
   Serial.print(" te ");
   Serial.print(comptador);
   Serial.println(" xifres");
   Serial.println("Entra un numero?");
   Serial.println(" ");
    }
  }
}
