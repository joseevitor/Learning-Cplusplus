#include <iostream>
#include "modulo.h"

using namespace std;

int main(int argc, char *argv[])
{
    int n = 5;

    cout << "fatorial de " << n << ": " << fatorial(n) << endl;
    cout << "area do quadrado " << n << ": " << area_quadrado(n) << endl;
    cout << "area do retangulo " << n << ": " << area_retangulo(n, n + 1) << endl;


    return 0;
}
