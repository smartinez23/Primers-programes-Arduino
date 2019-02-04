/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************


//********** Variables ************************************************************
boolean A, B, C, Output;


//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Taula de la Veritat");

  Serial.println("  A  B  C  |  Output");
  Serial.println("___________|________");
  
    A=0; B=0; C=0;
  Output =  0;
  Serial.print("  0  0  0  | ");
  Serial.println(Output);

    A=0; B=0; C=1;
  Output =  0;
  Serial.print("  0  0  1  | ");
  Serial.println(Output);

   A=0; B=1; C=0;
  Output =  0;
  Serial.print("  0  1  0  | ");
  Serial.println(Output);

    A=0; B=1; C=1;
  Output =  1;
  Serial.print("  0  1  1  | ");
  Serial.println(Output);

   A=1; B=0; C=0;
  Output =  0;
  Serial.print("  1  0  0  | ");
  Serial.println(Output);

    A=1; B=0; C=1;
  Output =  1;
  Serial.print("  1  0  1  | ");
  Serial.println(Output);

    A=1; B=1; C=0;
  Output =  1;
  Serial.print("  1  1  0  | ");
  Serial.println(Output);

     A=1; B=1; C=1;
  Output =  1;
  Serial.print("  1  1  1  | ");
  Serial.println(Output);

  
}


//********** Loop *****************************************************************
void loop()    // we need this to be here even though its empty
{
}


//********** Funcions *************************************************************
