#include <iostream>
using namespace std;
//! RICORSIONE

template <typename> 
class Hanoi
{
public:
   Hanoi(int n);

   void risolvi();

private:
   Pila <int> sinistra;
   Pila <int> centrale;
   Pila <int> destra;
};

int main()
{
}