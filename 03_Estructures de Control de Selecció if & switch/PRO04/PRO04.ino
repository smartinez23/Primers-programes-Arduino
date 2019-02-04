/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                           16/01/2019  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 105;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  } 
  else if ((tempAigua >= 90) && (tempAigua < 100))
  {
    Serial.print("Aigua a punt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100ºC");
  }
  else if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
  else
  {
  
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
