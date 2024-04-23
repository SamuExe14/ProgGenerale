#include <cstring>
#include <iostream>
#include <string>
using namespace std;

struct bottone{
     int codice;
     char* cartellino;
};

int main(){
     bottone* b = new bottone;
     b->cartellino = new char;
     strcpy(b->cartellino, "Stocazzoneeeeeeeee");

     cout << b->cartellino << endl;

     delete b;
     // delete b->cartellino
}