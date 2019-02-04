/**********************************************************************************
**                                                                               **
**                          Energia edifici                                      **
**                                                                               **
**  Sergio Martínez Martín                                           17/01/2019  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float KgCO2m2 = 5;

//********** Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);     

  if (KgCO2m2 < 3.5)
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell A");
  } 
  else if ((KgCO2m2 < 6.5)&&(KgCO2m2 >= 3.5))
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell B");
  }
  else if ((KgCO2m2 < 11.5)&&(KgCO2m2 >= 6.5))
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell C");
  }
  else if ((KgCO2m2 < 17.7)&&(KgCO2m2 >= 11.5))
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell D");
  }
  else if ((KgCO2m2 < 38.2)&&(KgCO2m2 >= 17.7))
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell E");
  }
  else if ((KgCO2m2 < 43.2)&&(KgCO2m2 >= 38.2))
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell F");
  }
  else if (KgCO2m2 >= 43.2)
  {
    Serial.print("La qualificació energètica de l'edifici és de nivell G");
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
