#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "numero: " << n << endl;
}

void mensagem(char c)
{
    cout << "caractere: " << c << endl;
}


int main(int argc, char *argv)
{
    mensagem(10);
    mensagem(20);
    return 0;
}
