/********************************************************************************
* pointers.c: Demonstrerar användning av pekare för tilldelning av två heltal
*             till två variabler x och y via en egenskapad funktion döpt assign.
* 
*             I detta fall måste pekare användas som ingående argument till
*             funktionen assign för att skriva direkt till variablernas 
*             adresser. Annars om pekare inte hade använts hade kopior av
*             variablerna passerats, vilket inte kan användas för tilldelning 
*             till originalvariablerna. Att passera adresser vid funktionsanrop 
*             kallas "pass-by-reference".
* 
*             För funktionen print, där variablernas värden skall skrivas ut,
*             så fungerar det utmärkt med kopior av variablerna, eftersom
*             variablernas värden enbart skall läsas. Då fungerar det utmärkt
*             med kopior med samma värde, vilket också medför förenklad syntax,
*             då antalet adressoperatorer & samt dereferensoperatorer * minskar.
*             Samtidigt är det inte effektivare att skicka kopior till sådana
*             små datamedlemmar, vilket dock är fallet för större objekt, såsom
*             arrayer och sammansatta datatyper (struktar). Att passera kopior
*             vid funktionsanrop kallas "pass-by-value".
*
*             Som en tumregel är det effektivare att använda "pass-by-value"
*             för primitiva datatyper såsom int, double och char, förutsatt
*             att skrivning inte skall ske till adressen (såsom genomfördes
*             i funktionen assign, vilket nödvändiggjorde "pass-by-reference").
*             Annars bör "pass-by-reference" användas, oavsett om det gäller
*             läsning eller skrivning.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* assign: Tilldelar heltal 3 och 5 till variabler på angivna adresser.
* 
*         - ptr1: Pekare till den första variabeln.
*         - ptr2: Pekare till den andra variabeln.
********************************************************************************/
void assign(int* ptr1, 
            int* ptr2)
{
   *ptr1 = 3;
   *ptr2 = 5;
   return;
}

/********************************************************************************
* print: Skriver ut angivna heltal.
*
*         - a: Det första heltal som skall skrivas ut.
*         - b: Det andra heltal som skall skrivas ut.
********************************************************************************/
void print(const int a, 
           const int b)
{
   printf("a = %d\n", a);
   printf("b = %d\n", b);
   return;
}

/********************************************************************************
* main: Deklarerar två heltalsvariabler x och y, som tilldelas heltal x = 3
*       samt y = 5 genom att passera deras respektive adresser till funktionen
*       assign. Variablernas innehåll skrivs sedan ut via anrop av funktionen
*       print, där kopior av variablerna passeras.
********************************************************************************/
int main(void)
{
   int x, y;
   assign (&x, &y);
   print(x, y);
   return 0;
}



