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

   for (size_t i = 0; i < 5; ++i)
   {
      faces = rand() % FACES;
      suits = rand() % SUITS;

      // printf("%d %d\n", faces , suits);

      printf("%s of %s\n", wFace[faces], wSuit[suits]);

      
   }
}

int main()
{
   unsigned int deck[SUITS][FACES] = {0};

   srand(time(NULL));
   shuffle(deck);

   const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

   const char *face[FACES] = {"Ace",
                              "Deuce",
                              "Three",
                              "Four",
                              "Five",
                              "Six",
                              "Seven",
                              "Eight",
                              "Nine",
                              "Ten",
                              "Jack",
                              "Queen",
                              "King"};

   deal(deck, face, suit);
}
