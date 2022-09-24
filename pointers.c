/********************************************************************************
* pointers.c: Demonstrerar anv�ndning av pekare f�r tilldelning av tv� heltal
*             till tv� variabler x och y via en egenskapad funktion d�pt assign.
* 
*             I detta fall m�ste pekare anv�ndas som ing�ende argument till
*             funktionen assign f�r att skriva direkt till variablernas 
*             adresser. Annars om pekare inte hade anv�nts hade kopior av
*             variablerna passerats, vilket inte kan anv�ndas f�r tilldelning 
*             till originalvariablerna. Att passera adresser vid funktionsanrop 
*             kallas "pass-by-reference".
* 
*             F�r funktionen print, d�r variablernas v�rden skall skrivas ut,
*             s� fungerar det utm�rkt med kopior av variablerna, eftersom
*             variablernas v�rden enbart skall l�sas. D� fungerar det utm�rkt
*             med kopior med samma v�rde, vilket ocks� medf�r f�renklad syntax,
*             d� antalet adressoperatorer & samt dereferensoperatorer * minskar.
*             Samtidigt �r det inte effektivare att skicka kopior till s�dana
*             sm� datamedlemmar, vilket dock �r fallet f�r st�rre objekt, s�som
*             arrayer och sammansatta datatyper (struktar). Att passera kopior
*             vid funktionsanrop kallas "pass-by-value".
*
*             Som en tumregel �r det effektivare att anv�nda "pass-by-value"
*             f�r primitiva datatyper s�som int, double och char, f�rutsatt
*             att skrivning inte skall ske till adressen (s�som genomf�rdes
*             i funktionen assign, vilket n�dv�ndiggjorde "pass-by-reference").
*             Annars b�r "pass-by-reference" anv�ndas, oavsett om det g�ller
*             l�sning eller skrivning.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* assign: Tilldelar heltal 3 och 5 till variabler p� angivna adresser.
* 
*         - ptr1: Pekare till den f�rsta variabeln.
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
*         - a: Det f�rsta heltal som skall skrivas ut.
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
* main: Deklarerar tv� heltalsvariabler x och y, som tilldelas heltal x = 3
*       samt y = 5 genom att passera deras respektive adresser till funktionen
*       assign. Variablernas inneh�ll skrivs sedan ut via anrop av funktionen
*       print, d�r kopior av variablerna passeras.
********************************************************************************/
int main(void)
{
   int x, y;
   assign (&x, &y);
   print(x, y);
   return 0;
}



