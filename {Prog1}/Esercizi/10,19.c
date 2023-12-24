#include <stdio.h>
//* Massima frequenza cardiaca = 220 - età
//* Frequenza cardiaca normale = 50/80% della massima frequenza cardiaca

struct healtProfile
{
     char nome[10];
     char cognome[15];
     char sesso[3];
     int annoNascita;
     float altezza;
     float peso;
};

int anniPaziente(int anni);
float BMI(float metri, float kg);
int frequenzaCardiaca(int *Ptr);

int main()
{
     struct healtProfile HealtProfile;

     puts("Inserire nei seguenti campi le informazioni richieste:");

     printf("Nome: ");
     scanf("%s", HealtProfile.nome);
     // printf("%s", HealtProfile.nome);

     printf("Cognome: ");
     scanf("%s", HealtProfile.cognome);
     // printf("%s", HealtProfile.cognome);

     printf("Sesso M/F: ");
     scanf("%s", HealtProfile.sesso);
     // printf("%s", HealtProfile.sesso);

     printf("Anno di nascita: ");
     scanf("%d", &HealtProfile.annoNascita);
     // printf("%d", HealtProfile.annoNascita);

     printf("Altezza in metri: ");
     scanf("%f", &HealtProfile.altezza);
     // printf("%f", HealtProfile.altezza);

     printf("Peso in kg: ");
     scanf("%f", &HealtProfile.peso);
     // printf("%f", HealtProfile.peso);
     puts("");

     // anniPaziente(HealtProfile.annoNascita);
     printf("\nIl paziente ha %d anni", anniPaziente(HealtProfile.annoNascita));
     printf("\nIl BMI del paziente equivale a %f\n", BMI(HealtProfile.altezza, HealtProfile.peso));
     int *anniPtr;
     *anniPtr = anniPaziente(HealtProfile.annoNascita);
     frequenzaCardiaca(anniPtr);
}

float BMI(float metri, float kg)
{
     float bmi = kg / (metri * 2);
     // printf("Il BMI del paziente equivale a %f", bmi);
     return bmi;
}

int anniPaziente(int anni)
{
     anni = 2023 - anni;
     // printf("Il paziente ha %d anni\n", anni);
     return anni;
}

int frequenzaCardiaca(int *Ptr)
{
     int cardMax = 220 - *Ptr;

     int cardNorm = cardMax / 2;
     int cardNorm1 = cardMax - ((*Ptr * 80) / 100);

     printf("La frequenza cardiaca max equivale a %d bpm\n", cardMax);
     printf("mentre la frequenza cardiaca normale si aggira intorno ai %d e i %d bpm\n", cardNorm, cardNorm1);
}