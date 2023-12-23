#include <stdio.h>
//* Massima frequenza cardiaca = 220 - età
//* Frequenza cardiaca normale = 50/80% della massima frequenza cardiaca 

struct healtProfile{
     char nome[10];
     char cognome[15];
     char *sesso;
     int *annoNascita;
     float altezza;
     float *peso;
};

// int anniPaziente();
// int frequenzaCardiaca();
// float BMI();

int main(){

     struct healtProfile *HealtProfile;

     puts("Inserire nei seguenti campi le informazioni richieste:");
     
     printf("Nome: ");
     scanf("%s", &HealtProfile->nome);
     
     printf("Cognome: ");
     scanf("%s", &HealtProfile->cognome);

     printf("Sesso M/F: ");
     scanf("%s", HealtProfile->sesso);

     printf("Anno di nascita: ");
     scanf("%d", &HealtProfile->annoNascita);

     printf("Altezza: ");
     scanf("%f", HealtProfile->altezza);

     printf("Peso in kg: ");
     scanf("%f", HealtProfile->peso);
}