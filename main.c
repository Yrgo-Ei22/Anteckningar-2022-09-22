/********************************************************************************
* main.c: Demonstration av villkorssatser och loopar i C.
* 
*         För att realisera satser som bara exekverar en gång ifall ett givet
*         villkor är sant används primärt if-else satsen, som möjliggör att
*         ett flertal olika villkor kan testas och implementeras.
* 
*         If-else satsen används för att generera villkor enligt nedan:
* 
*         Om x är sant, genomför plan A.
*         Annars om y är sant, genomför plan B.
*         Annars (för övriga fall) genomför plan C.
*
*         Ovanstående villkor kan realiseras via följande kod.
* 
*         if (x)
*         {
*            // Kod för att genomföra plan A.
*         }
*         else if (y)
*         {
*            // Kod för att genomföra plan B.
*         }
*         else
*         {
*            // Kod för att genomföra plan C.
*         }
* 
*         Valfritt antal villkor kan läggas till i en sådan sats.
* 
*         För att realisera satser som exekverar så länge ett givet villkor
*         är sant används så kallade loopar, primärt via while primärt if-else satsen, som möjliggör att
*         ett flertal olika villkor kan testas och implementeras.
* 
*         För att realisera loopar, alltså satser som exekverar så länge ett 
*         givet villkor är sant, används normalt while-satsen eller for-satsen,
*         varav while-satsen är mer vanlig för kontinuerliga loopar, exempelvis 
*         sådana som genomförs under ett helt program, medan
*         for-satser används för att generera loopar ett visst antal varv,
*         iteration genom arrayer och liknande.
* 
*         För att implementera en kontinuerlig loop krävs enbart att villkoret
*         ej är lika med 0, vilket normalt implementeras via villkoret 1. Som
*         exempel, en kontinuerlig while-sats definieras enligt nedan:
* 
*         while (1)
*         {
*         }
* 
*         Om while-satsen enbart skall exekvera tio gånger, så kan en räknare
*         implementeras via en variabel i, som räknas upp från 0 till denna når
*         värdet 10. I slutet av while-satsen sker inkrementering med ++-operatorn:
* 
*         int i = 0; // Räknare till while-satsen.
* 
*         while (i < 10) // Loop som eekverar tio gånger.
*         {
*            i++; // Inkrementerar i (ökar i med ett).
*         }
* 
*         Ovanstående fungerar bra, men det kan lätt bli rörigt ifall ett 
*         flertal loopar implementeras, särskilt ifall nästlade loopar används
*         (loopar inuti loopar). En mer komprimerad variant av ovanstående 
*         kan realiseras via for-satsen, där räknaren/iteratorn, villkoret samt 
*         inkrementeringen definieras som villkor, separerade med semikolon:
* 
*         for (int i = 0; i < 10; ++i) // Loop som exekverar tio gånger.
*         {
*         }
* 
*         while-satsen föredras alltså primärt för kontinuerliga loopar, annars
*         föredras primärt for-satsen.
* 
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Läser in temperaturen från terminalen fem gånger. Om temperaturen 
*       överstiger 30 grader eller understiger 20 grader så regleras denna 
*       till 25 grader, annars görs ingenting.
********************************************************************************/
int main(void)
{
   int temp = 0;

   for (int i = 0; i < 5; ++i)
   {
      printf("Please enter the room temperature:\n");

      scanf_s("%d", &temp);

      if (temp > 30)
      {
         temp = 25;
      }
      else if (temp < 20)
      {
         temp = 25;
      }

      printf("\nThe temperature is %d degrees!\n\n", temp);
   }

   printf("Bye!\n\n");
   return 0;
}