/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                                       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//*******************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//*********************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print("r1 = ");
    Serial.print(r1);
    
    r2 = Serial.parseInt();
    Serial.print("    r2 = ");
    Serial.println(r2);
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    rSerie = r1+r2;
    rParalel = (1/r1) + (1/r2);
    Serial.print("La resistència en sèrie val ");
    Serial.print(rSerie);
    Serial.println(" ohms");
    Serial.print("La resistència en paral·lel val ");
    Serial.print(rParalel);
    Serial.println(" ohms");
    Serial.println(" ");
    Serial.println("Entra nous valors per r1 i r2");
    Serial.println(" ");
    Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
    }
  }
}
