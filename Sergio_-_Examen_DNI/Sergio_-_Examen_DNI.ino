/**********************************************************************************
**                                                                               **
**                         Examen                                                **
**                                                                               **
**  Sergio Martínez Martín                                          04/02/2019   **
**********************************************************************************/

//********** Includes *************************************************************
long dni; 
int residu;
//********** Variables ************************************************************
void setup() {
 
  Serial.begin(9600);
  Serial.print("El teu DNI és ");

}

void loop() {
 while (Serial.available() > 0) {
 dni= Serial.parseInt();
 if (Serial.read() == '\n'){
 Serial.print(dni);
 residu = dni%23;
 
if (residu == 0)
   
    {
       Serial.print("-");
       Serial.println("T");
       Serial.print("El teu DNI és ");
    }
if (residu == 1)
   
    {
       Serial.print("-");
       Serial.println("R");
       Serial.print("El teu DNI és ");
   
  }
if (residu == 2)
   
    {
       Serial.print("-");
       Serial.println("W");
       Serial.print("El teu DNI és ");
}
if (residu == 3)
   
    {
       Serial.print("-");
       Serial.println("A");
       Serial.print("El teu DNI és ");
}
if (residu == 4)
   
    {
       Serial.print("-");
       Serial.println("G");
       Serial.print("El teu DNI és ");
    }
if (residu == 5)
   
    {
       Serial.print("-");
       Serial.println("M");
       Serial.print("El teu DNI és ");
    }
if (residu == 6)
   
    {
      Serial.print("-");
       Serial.println("Y");
       Serial.print("El teu DNI és ");
    }
if (residu == 7)
   
    {
        Serial.print("-");
       Serial.println("F");
       Serial.print("El teu DNI és ");
    }
if (residu == 8)
   
    {
       Serial.print("-");
       Serial.println("P");
       Serial.print("El teu DNI és ");
    }
if (residu == 9)
   
    {
       Serial.print("-");
       Serial.println("D");
       Serial.print("El teu DNI és ");
    }
if (residu == 10)
   
    {
        Serial.print("-");
       Serial.println("X");
       Serial.print("El teu DNI és ");
    }
if (residu == 11)
   
    {
        Serial.print("-");
       Serial.println("B");
       Serial.print("El teu DNI és ");
    }
if (residu == 12)
   
    {
        Serial.print("-");
       Serial.println("N");
       Serial.print("El teu DNI és ");
    }
if (residu == 13)
   
    {
       Serial.print("-");
       Serial.println("J");
       Serial.print("El teu DNI és ");
    }
if (residu == 14)
   
    {
       Serial.print("-");
       Serial.println("Z");
       Serial.print("El teu DNI és ");
    }
if (residu == 15)
   
    {
        Serial.print("-");
       Serial.println("S");
       Serial.print("El teu DNI és ");
    }
if (residu == 16)
   
    {
        Serial.print("-");
       Serial.println("Q");
       Serial.print("El teu DNI és ");
    }
if (residu == 17)
   
    {
        Serial.print("-");
       Serial.println("V");
       Serial.print("El teu DNI és ");
    }
if (residu == 18)
   
    {
        Serial.print("-");
       Serial.println("H");
       Serial.print("El teu DNI és ");
    }
if (residu == 19)
   
    {
        Serial.print("-");
       Serial.println("L");
       Serial.print("El teu DNI és ");
    }
if (residu == 20)
   
    {
       Serial.print("-");
       Serial.println("C");
       Serial.print("El teu DNI és ");
    }
if (residu == 21)
   
    {
       Serial.print("-");
       Serial.println("K");
       Serial.print("El teu DNI és ");
    }
if (residu == 22)
   
    {
       Serial.print("-");
       Serial.println("E");
       Serial.print("El teu DNI és ");
    }
 }
 }
}
 
