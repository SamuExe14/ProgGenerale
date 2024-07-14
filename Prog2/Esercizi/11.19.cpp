#include <iostream>
#include <ctime>
using namespace std;

class Random
{
private:
     int num;

public:
     int randomizza();
};

int Random::randomizza()
{
     srand(time(NULL));
     num = rand() % 1000;
     return num;
}

int main()
{
     Random numero;
     cout << numero.randomizza() << endl;
}