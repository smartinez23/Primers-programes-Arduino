/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                                       **
**********************************************************************************/

//********** Includes *************************************************************
int num; 
int residu;
//********** Variables ************************************************************
void setup() {
 
  Serial.begin(9600);
  Serial.println("Entra un número?");
}

void loop() {
 while (Serial.available() > 0) {
 num = Serial.parseInt();
 if (Serial.read() == '\n'){
 residu = num%2;
 
   if (residu == 1)
   
    {
       Serial.print("El ");
       Serial.print(num);
       Serial.println(" es senar.");
    }
    else 
    {
       Serial.print("El ");
       Serial.print(num);
       Serial.println(" es parell.");
    }
  Serial.println(" ");
  Serial.println("Entra un número?");
  }
}
}
