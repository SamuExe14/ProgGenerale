#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES])
{

   for (size_t card = 1; card <= CARDS; ++card)
   {
      size_t row;
      size_t column;

      do
      {
         row = rand() % SUITS;
         column = rand() % FACES;
      } while (wDeck[row][column] != 0);

      wDeck[row][column] = card;
   }
}

void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
   srand(time(NULL));
   //   for (size_t card = 1; card <= CARDS; ++card)
   //   {
   //        for (size_t row = 0; row < SUITS; ++row)
   //        {
   //             for (size_t column = 0; column < FACES; ++column)
   //             {
   //                  if (wDeck[row][column] == card)
   //                  {
   //                       printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t');
   //                  }
   //             }
   //        }
   //   }
   int faces = 0;
   int suits = 0;

   unsigned int counterFaces[FACES] = {0};
   unsigned int counterSuits[SUITS] = {0};

   for (size_t i = 0; i < 5; ++i)
   {
      faces = rand() % FACES;
      suits = rand() % SUITS;

      ++counterFaces[faces];
      ++counterSuits[suits];

      // printf("%d %d\n", faces , suits);

      printf("%s di %s\n", wFace[faces], wSuit[suits]);
   }
   puts("");

   for (size_t x = 0; x < FACES; ++x)
   {
      if (counterFaces[x] == 2)
      {
         printf("Nel mazzo c'è una coppia di %s\n", wFace[x]);
      }
   }

   for (size_t y = 0; y < SUITS; y++)
   {
      if (counterSuits[y] == 2)
      {
         printf("Nel mazzo c'è una coppia di %s\n", wSuit[y]);
      }
      else if (counterSuits[y] == 3)
      {
         printf("Nel mazzo ci sono tre carte di %s", wSuit[y]);
      }
   }
}

int main()
{
   unsigned int deck[SUITS][FACES] = {0};

   srand(time(NULL));
   shuffle(deck);

   const char *suit[SUITS] = {"Cuori", "Quadri", "Fiori", "Picche"};

   const char *face[FACES] = {"Asso",
                              "Due",
                              "Tre",
                              "Quattro",
                              "Cinque",
                              "Sei",
                              "Sette",
                              "Otto",
                              "Nove",
                              "Dieci",
                              "J",
                              "Q",
                              "K"};

   deal(deck, face, suit);
}
