#include <iostream>

using namespace std;

# Pode ser util quando vc quer saber qnts vzs uma função é chamada


int n_global = 12;

void foo()
{
    int n = 10;
    static int n_static = 1;
    cout << "variavel local: " << n << endl;
    cout << "variavel global" << n_global << endl;
    n_static++;
    cout << "variavel static: " << n_static << endl;
}

int main(int argc, char *argv[])
{
    foo();
    foo();
    foo();
    return 0;
}
