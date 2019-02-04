/**********************************************************************************
**                                                                               **
**                              Math Is Fun                                      **
**                                                                               **
**  Sergio Martínez Martín                                           11/12/2018  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
int drive_mb = 0;

//********** Setup ****************************************************************
void setup()             
{
  Serial.begin(9600);     
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//********** Loop *****************************************************************
void loop()     
{
}

//********** Funcions *************************************************************
