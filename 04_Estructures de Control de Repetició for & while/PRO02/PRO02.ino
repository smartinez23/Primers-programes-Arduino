/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Sergio Martínez Martín                                        21/01/2019     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int comptar = 11;
//*********************************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  if (i < comptar)
  {
    Serial.print(i);
    Serial.print("-");
  }
  else
  {
    Serial.print(i);
  }
}
void loop()     // we need this to be here even though its empty
{
}
