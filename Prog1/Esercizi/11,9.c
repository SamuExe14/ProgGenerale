#include <stdio.h>
#include <math.h>

int main()
{
     puts("Inserire il numero di commensali");
     puts("compreso tra 2 e 16");
     unsigned int commensali;
     scanf("%u", &commensali);
     printf("%u", commensali);

     float farina = 0.3;
     float zucchero = 0.1;
     unsigned uova = 4;

     puts("Sono presenti persone con il diabete?(s/n)");
     char diabete;
     scanf("%s", &diabete);

     switch (diabete)
     {
     case 'n':
     case 'N':
          if (commensali >= 2 && commensali <= 4)
          {
               printf("Dosaggio \"base\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Zucchero = %.2fkg\n", zucchero);
               printf("Uova = %d unità\n", uova);
          }
          else if (commensali >= 5 && commensali <= 8)
          {
               farina *= 2.5;
               uova *= 2.5;
               ceil(uova);
               zucchero *= 1.5;

               printf("Dosaggio \"medio\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Zucchero = %.2fkg\n", zucchero);
               printf("Uova = %d unità\n", uova);
          }
          else if( commensali >= 9 && commensali <= 16)
          {
               farina *= 2.5 + farina;
               uova *= 2.5 + uova;
               ceil(uova);
               zucchero *= 1.5 + zucchero;

               printf("Dosaggio \"grande\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Zucchero = %.2fkg\n", zucchero);
               printf("Uova = %d unità\n", uova);
          }
          break;

     case 's':
     case 'S':
          float fruttosio = zucchero * ((float)2 / (float)3);

          if (commensali >= 2 && commensali <= 4)
          {
               printf("Dosaggio \"base\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Fruttosio = %.2fkg\n", fruttosio);
               printf("Uova = %d unità\n", uova);
          }
          else if (commensali >= 5 && commensali <= 8)
          {
               farina *= 2.5;
               uova *= 2.5;
               ceil(uova);
               fruttosio *= 1.5;

               printf("Dosaggio \"medio\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Fruttosio = %.2fkg\n", fruttosio);
               printf("Uova = %d unità\n", uova);
          }
          else
          {
               farina *= 2.5 + farina;
               uova *= 2.5 + uova;
               ceil(uova);
               fruttosio *= 1.5 + fruttosio;

               printf("Dosaggio \"grande\":\n");
               printf("Farina = %.2fkg\n", farina);
               printf("Fruttosio = %.2fkg\n", fruttosio);
               printf("Uova = %d unità\n", uova);
          }
          break;

     case ' ':
     case '\t':
     case '\n':
          break;

     default:
          puts("Carattere non valido.");
          puts("Inserire uno dei due caratteri specificati(s/n)");
          break;
     }
}