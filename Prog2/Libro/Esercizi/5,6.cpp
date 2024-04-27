#include <iostream>
using namespace std;

float converti(float celsius)
{
   float fahrenheit = (float)9 / (float)5 * celsius + 32;
   return fahrenheit;
}

template <class T>
T conversione(T celsius)
{
   float fahrenheit = (float)9 / (float)5 * celsius + 32;
   return fahrenheit;
}

int main()
{
   cout << "Inserire gradi in Celsius:" << endl;
   float celsius;
   cin >> celsius;

   cout << "La temperatura convertita è: " << conversione(celsius) << " F°" << endl;
}