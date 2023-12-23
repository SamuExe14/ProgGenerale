#include <stdio.h>
//* Massima frequenza cardiaca = 220 - età
//* Frequenza cardiaca normale = 50/80% della massima frequenza cardiaca 

struct healtProfile{
     char nome[10];
     char cognome[15];
     char *sesso;
     int *annoNascita;
     float *altezza;
     float *peso;
};

// int anniPaziente();
// int frequenzaCardiaca();
// float BMI();

int main(){

     struct healtProfile *HealtProfile;

     printf("Inserire nome e cognome: ");
     scanf("%s", &HealtProfile->nome);
     scanf("%s", &HealtProfile->cognome);
     printf("\n%s %s\n", HealtProfile->nome, HealtProfile->cognome);

}